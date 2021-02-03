#include <iostream>
#include <string>
using namespace std;
 
// Function to find out the minimum number of deletions required to
// convert a given string X[i..j] into a palindrome
int minDeletions(string X, int i, int j)
{
    // base condition
    if (i >= j)
        return 0;
 
    // if last character of the string is same as the first character
    if (X[i] == X[j])
        return minDeletions(X, i + 1, j - 1);
 
    // else if last character of string is different to the first character
 
    // 1. Remove last character & recur for the remaining substring
    // 2. Remove first character & recur for the remaining substring
 
    // return 1 (for remove operation) + minimum of the two values
 
    return 1 + min (minDeletions(X, i, j - 1), minDeletions(X, i + 1, j));
}
 
int main()
{
    string X = "ACBCDBAA";
    int n = X.length();
 
    cout << "The minimum number of deletions required are " <<
        minDeletions(X, 0, n - 1);
 
    return 0;
}
