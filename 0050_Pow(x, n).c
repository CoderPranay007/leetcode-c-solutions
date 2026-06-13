/*
 * LeetCode 50. Pow(x, n)
 * Difficulty: Medium
 * Topics: Math, Recursion
 *
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */

double myPow(double x, int n) 
{
    long long m = n;

    if(m<0)
    {
        x = 1/x;
        m = -m;
    }
    
    double result = 1;
    while(m>0)
    {
        if(m & 1)
        {
           result *= x;
        }

        x *= x;
        m /= 2;
    }

    return result;
}
