/*
    Problem: Cherry
    Link: https://codeforces.com/problemset/problem/1554/A

    Solution:



Analysis:


Time Complexity: O(n)

*/

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    long long ans = 0;
    for( int j=0; j< n-1; j++)
        ans = max(ans, (long long)arr[j] * arr[(j+1)]);
    cout << ans << endl;
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