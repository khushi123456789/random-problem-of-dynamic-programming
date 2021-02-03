#include <stdio.h>
 
// DP function to find total ways to reach the n'th stair from bottom
// when a person is allowed to climb either 1 or 2 or 3 stairs at a time
int totalWays(int n)
{
    if (n <= 1)
        return 1;
 
    // base case: 1 way (with no steps)
    int a = 1;
 
    // There is only 1 way to reach the 1st stair
    int b = 1;
 
    // There are 2 ways to reach the 2nd stair
    int c = 2;
 
    for (int i = 3; i <= n; i++)
    {
        int result = a + b + c;
 
        a = b;
        b = c;
        c = result;
    }
 
    return c;
}
 
int main(void)
{
    int n = 4;
    printf("Total ways to reach the %d'th stair are %d", n, totalWays(n));
 
    return 0;
}



