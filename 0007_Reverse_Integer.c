/*
 * LeetCode 7. Reverse Integer
 * Difficulty: Medium
 * Topics: Math
 *
 * Time Complexity: O(log x)
 * Space Complexity: O(1)
 */

#include <limits.h>

int reverse(int x)
{   
    
    int min = INT_MIN;
    int max = INT_MAX;

    if (x == min) return 0;
    
    int y = x;
    
    if(x<0)
    {
        y = -y;
    }
    int digit = 0;
    long long rev = 0;

    while (y>0)
    {
        digit = y%10;
        y = y/10;
        rev = rev*10 + digit;
    }
    
    if(rev < min || rev > max)
    {
        return 0;
    }
    
    if(x<0)
    {
        rev = -rev;
    }
    return (int)rev; 
}   
