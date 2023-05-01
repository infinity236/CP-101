/*
    Problem: Gregor and Cryptography
    Link: https://codeforces.com/problemset/problem/1549/A

Analysis:
n-1 is always even, so we can choose any even number to be the second number. (n-1 > (n-1)/2)) & (a<b)
(n-1)/2 is always even, so we can choose any prime number to be the second number.

Time Complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin >> n;
    int a = n-1;
    int b = a/2;
    
    cout << b << " " << a << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}