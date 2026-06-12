/*
 * LeetCode 2217. Find Palindrome With Fixed Length
 * Difficulty: Medium
 * Topics: Math, Array
 *
 * Time Complexity: O(querySize + intLength)
 * Space Complexity: O(1)
 */

long long* kthPalindrome(int* queries, int queriesSize, int intLength, int* returnSize) 
{   
    *returnSize = queriesSize;
    long long *result = malloc(queriesSize * sizeof(long long));
    
    int n = intLength;
    int halflen = (n + 1)/2 ;
    
    long long start = 1;
    for(int i=1; i<halflen; i++)
    {
        start *=10;
    }

    long long end = start*10 - 1;

    for(int i=0; i<queriesSize; i++)
    {
        long long half = start + queries[i] - 1;

        if (half > end)
        {
            result[i] = -1;
            continue;
        }

        long long palin = half;
        long long x;

        if(n%2 == 0)
        {
            x = half;
        }
        else
        {
            x = half/10;
        }

        while(x)
        {
            palin = palin * 10 + (x%10);
            x/=10;
        }

        result[i] = palin;
    }

    return result;
}
