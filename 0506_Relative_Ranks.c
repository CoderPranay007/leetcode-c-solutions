/*
 * LeetCode 506. Relative Ranks
 * Difficulty: Easy
 * Topics: Array, Sorting, Heap, Hash Table
 *
 * Time Complexity: O(n log n)
 * Space Complexity: O(n)
 */

typedef struct
{
    int score;
    int index;
} Node;

int compare(const void *a, const void *b)
{
    Node *x = (Node *)a;
    Node *y = (Node *)b;

    return y->score - x->score;
}

char** findRelativeRanks(int* score, int scoreSize, int* returnSize)
{
    int n = scoreSize;
    *returnSize = n;

    char **final = malloc(n * sizeof(char *));

    Node heap[n];

    for (int i = 0; i < n; i++)
    {
        heap[i].index = i;
        heap[i].score = score[i];
    }

    qsort(heap, n, sizeof(Node), compare);

    for (int i = 0; i < n; i++)
    {
        int rank = i + 1;

        if (rank == 1)
        {
            final[heap[i].index] = "Gold Medal";
        }
        else if (rank == 2)
        {
            final[heap[i].index] = "Silver Medal";
        }
        else if (rank == 3)
        {
            final[heap[i].index] = "Bronze Medal";
        }
        else
        {
            final[heap[i].index] = malloc(20 * sizeof(char));
            sprintf(final[heap[i].index], "%d", rank);
        }
    }

    return final;
}
