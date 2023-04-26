/*
    Problem: Ezzat and Two Subsequences
    Link: https://codeforces.com/problemset/problem/1557/A

    Solution:
    1. Input in Priority Queue, so that we can get the largest number in O(1) time.
    2. Calculate the sum of all the numbers in the array and substract the largest number from it.
    3. Get the average of the remaining numbers and add it to the largest number.


    Time Complexity: O(nlogn) + O(n) = O(nlogn)
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
    priority_queue<double> pq; // O(nlogn)
    double sumSubArray = 0.00;
    for(int i=0; i<n; i++)  //O(n)
    {
        double num; cin >> num;
        pq.push(num);
        sumSubArray +=num;
    }
    double largestNumber = pq.top();
    double avgSubArray = (sumSubArray-largestNumber)/(double)(n-1);
    double ans = largestNumber + avgSubArray;
    
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