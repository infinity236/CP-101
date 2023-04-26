/*
    Problem: Ezzat and Two Subsequences
    Link: https://codeforces.com/problemset/problem/1557/A

    Solution:
    1. Input, add, Find the largest number; 
    3. Calculate the average of the array exclude largest number, then add it to the largest number.


    Time Complexity: //O(n)
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
    double arr[n]; double largestNum = INT_MIN; double sumArray =0.00;
    for (int i = 0; i < n; i++) //O(n)
    {
        cin >> arr[i];
        sumArray += arr[i];
        largestNum = max(largestNum, arr[i]);
    }

    double avgSubArray = (sumArray-largestNum)/(double)(n-1);
    double ans = largestNum + avgSubArray;
    
    cout << setprecision(12) << ans << endl;
    
}

int main()
{
    ios::sync_with_stdio(false); //IF YOU DON'T USE THIS, YOU WILL DEFINITELY GET TLE, BECAUSE OF SLOW I/O OPERATION 
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