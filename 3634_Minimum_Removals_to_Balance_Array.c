/*
 * LeetCode 3634. Minimum Removals to Balance Array
 * Difficulty: Medium
 * Topics: Array, Sorting, Two Pointers, Sliding Window
 *
 * Time Complexity: O(n log n)
 * Space Complexity: O(1)
 */

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int minRemoval(int* nums, int numsSize, int k) 
{
    int n = numsSize;
    qsort(nums, n, sizeof(int), cmp);

    int maxWindow = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j < n && (long long)nums[j] <= (long long)k * nums[i])
        {
            j++;
        }

        int count = j - i;
        if (count > maxWindow)
        {
            maxWindow = count;
        }

        if (j == n) {
            break;
        }
    }

    return n - maxWindow;
}
