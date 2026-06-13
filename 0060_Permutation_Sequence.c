/*
 * LeetCode 60. Permutation Sequence
 * Difficulty: Hard
 * Topics: Math, Recursion
 *
 * Time Complexity: O(n^2)
 * Space Complexity: O(n)
 */

char* getPermutation(int n, int k) 
{  
    int a = k - 1;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        arr[i] = i+1;
    }
    
    char *result = (char *)malloc((n + 1) * sizeof(char));
    result[n] = '\0';

    for(int x=0; x<n; x++)
    {
        int m = n - x;
        int factorial=1;

    for (int i = 1; i <= m - 1; i++)
        {
            factorial *= i;
        }
         
    
    int digit = a/factorial;
    a = a%factorial;
    
    
    result[x]= arr[digit] + '0' ;

    for(int i=digit; i<m-1; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[m-1] = 0;
    }

    return result;
}
