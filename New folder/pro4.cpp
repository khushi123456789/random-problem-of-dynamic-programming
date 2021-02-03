#include <stdio.h>
 
// Utility function to return the maximum of two integers
int max(int i, int j) {
    return i > j ? i : j;
}
 
// Recursive function to find the maximum profit that can be earned by selling stocks.
// Here, arrays `x[0…n]` and `y[0…n]` contains the future price predictions of the
// two different stocks for the next n-days
int maxProfit(int x[], int y[], int n)
{
    // base case
    if (n < 0) {
        return 0;
    }
 
    // store the maximum profit gained
    int profit = 0;
 
    // sell the first stock on the n'th day, and recur for the (n-1)'th day
    profit = max(profit, x[n] + maxProfit(x, y, n - 1));
 
    // sell the second stock on the n'th day, and recur for the (n-2)'th day
    // (no transaction can be made on the (n-1)'th day)
    profit = max(profit, y[n] + maxProfit(x, y, n - 2));
 
    // return the maximum profit
    return profit;
}
 
int main()
{
    int x[] = { 5, 3, 4, 6, 3 };
    int y[] = { 8, 4, 3, 5, 10 };
    int n = sizeof(x) / sizeof(x[0]);
 
    printf("Maximum profit earned is %d", maxProfit(x, y, n - 1));
 
    return 0;
}
