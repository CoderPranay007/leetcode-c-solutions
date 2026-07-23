/*
 * LeetCode 347. Top K Frequent Elements
 * Difficulty: Medium
 * Topics: Array, Hash Table, Bucket Sort
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

typedef struct hashNode
{
    int key;
    int freq;
    struct hashNode *next;
} HashNode;

int hashFunction(int key, int size)
{
    return (key % size + size) % size;
}

void insert(HashNode **table, int size, int key)
{
    int index = hashFunction(key, size);

    HashNode *current = table[index];

    while (current != NULL)
    {
        if (current->key == key)
        {
            current->freq++;
            return;
        }

        current = current->next;
    }

    HashNode *newNode = (HashNode *)malloc(sizeof(HashNode));
    newNode->key = key;
    newNode->freq = 1;
    newNode->next = table[index];

    table[index] = newNode;
}

HashNode **buildHashTable(int *nums, int numsSize)
{
    HashNode **table = (HashNode **)malloc(numsSize * sizeof(HashNode *));

    for (int i = 0; i < numsSize; i++)
    {
        table[i] = NULL;
    }

    for (int i = 0; i < numsSize; i++)
    {
        insert(table, numsSize, nums[i]);
    }

    return table;
}

typedef struct BucketNode
{
    int value;
    struct BucketNode *next;
} BucketNode;

int *topKFrequent(int *nums, int numsSize, int k, int *returnSize)
{
    HashNode **table = buildHashTable(nums, numsSize);

    BucketNode **buckets = (BucketNode **)malloc((numsSize + 1) * sizeof(BucketNode *));

    for (int i = 0; i <= numsSize; i++)
    {
        buckets[i] = NULL;
    }

    for (int i = 0; i < numsSize; i++)
    {
        HashNode *current = table[i];

        while (current != NULL)
        {
            int frequency = current->freq;

            BucketNode *newNode = (BucketNode *)malloc(sizeof(BucketNode));
            newNode->value = current->key;

            newNode->next = buckets[frequency];
            buckets[frequency] = newNode;

            current = current->next;
        }
    }

    int *result = (int *)malloc(k * sizeof(int));
    int count = 0;

    for (int i = numsSize; i >= 1 && count < k; i--)
    {
        BucketNode *current = buckets[i];

        while (current != NULL && count < k)
        {
            result[count++] = current->value;
            current = current->next;
        }
    }

    *returnSize = k;
    return result;
}
