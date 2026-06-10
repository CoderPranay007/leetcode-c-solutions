/*
 * LeetCode 9. Palindrome Number
 * Difficulty: Easy
 * Topics: Math
 *
 * Time Complexity: O(log x)
 * Space Complexity: O(1)
 */

bool isPalindrome(int x) 
{
   if(x<0) return false;
   
    int y = x;
    int digit = 0;
    long long rev = 0;

    while(y>0)
    {
        digit = y%10;
        y = y/10;
        rev = rev * 10 + digit;
    }
    
    if(rev==x) return true;
    else 
    { 
      return false;
    }
}
