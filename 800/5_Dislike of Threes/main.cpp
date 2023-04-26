/*
    Problem: Arithmetic Array
    Link: https://codeforces.com/problemset/problem/1560/A

    Solution:
    1. Input
    2. If the number is divisible by 3 or the last digit of the number is 3, then increment the number(loops upper bound)
    3. Print the number

    Time Complexity: O(n)
*/
#include <bits/stdc++.h>
using namespace std;

/*
Analysis:
            1
Number:     1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
Output:     1 2   4 5   7 8   10 11       14    16 17
Input:      1 2   3 4   5 6   7  8        9     10 11
*/

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
        {
            n++;
        }        
    }

    cout << n << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}