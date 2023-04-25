/*
    Problem: Arithmetic Array
    Link: https://codeforces.com/problemset/problem/1537/A

    Solution:
    1. Find the sum of all elements in the array
    2. If the sum is equal to n, then print 0
    3. If the sum is less than n, then print 1
    4. If the sum is greater than n, then print the difference between the sum and n

    Time Complexity: O(n)
*/
#include <bits/stdc++.h>
using namespace std;

double sumArray(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += *(arr+i);
    }
    return sum;
}

void solve(){

    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    double arithmeticMean = (sumArray(arr, n))/n;
    
    if(arithmeticMean == 1) cout << "0" << endl;
    else if(arithmeticMean < 1) cout << "1" << endl;
    else cout << (sumArray(arr, n) - n) << endl; 
    
}

int main(){
    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}