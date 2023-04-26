/*
    Problem: Ezzat and Two Subsequences
    Link: https://codeforces.com/problemset/problem/1557/A

    Solution:
    1. Input
    2. Sort the array, then find the largest number and the sum of the rest of the array.
    3. Calculate the average of the rest of the array, then add it to the largest number.


    Time Complexity: *O(n) + O(nlogn) + O(n) = O(nlogn)
*/
#include <bits/stdc++.h>
using namespace std;
/*
Analysis:
3 1 2
3 + ((2+1)/2) 1.5 = 4.5
max value + average of other value
*/
void solve()
{
    int n; cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) //O(n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n); //O(nlogn)
    double largestNum = arr[n - 1];
    double sumSubSeq = 0.000000;
    
    for(int j=0; j<(n-1); j++) //O(n)
    {
        sumSubSeq += arr[j];
    }
    double ans = largestNum + (sumSubSeq/(double)(n-1));
    cout << setprecision(12) << ans << endl;

}

int main()
{
    ios::sync_with_stdio(false); //IF YOU DON'T USE THEES 3 LINES, YOU WILL DEFINITELY GET TLE, BECAUSE OF THE I/O OPERATION
	cin.tie(NULL);
	cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}