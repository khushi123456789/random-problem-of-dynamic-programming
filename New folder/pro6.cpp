#include <stdio.h>
 
// Recursive function to find number of ways to fill a n x 4 matrix
// with 1 x 4 tiles
int totalWays(int n)
{
    // base cases
    if (n < 1)
        return 0;
 
    if (n < 4)
        return 1;
 
    if (n == 4)
        return 2;
 
    // combine results of placing a tile horizontally and
    // placing 4 tiles vertically
    return totalWays(n - 1) + totalWays(n - 4);
}
 
int main(void)
{
    int n = 5;
    printf("Total number of ways are %d", totalWays(n));
 
    return 0;
}
