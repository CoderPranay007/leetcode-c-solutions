/*
 * LeetCode 458. Poor Pigs
 * Difficulty: Hard
 * Topics: Math, Dynamic Programming, Combinatorics
 *
 * Time Complexity: O(log₍tests+1₎ buckets)
 * Space Complexity: O(1)
 */

int poorPigs(int buckets, int minutesToDie, int minutesToTest) 
{
    if(buckets == 1)
    {
        return 0;
    }

    int tests = minutesToTest / minutesToDie;
    int x = tests + 1;
    int count = 1;

    while(x < buckets)
    {
        count++;
        x *= (tests + 1);
    }

    return count;
}
