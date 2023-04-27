/*
    Problem: Find The Array
    Link: https://codeforces.com/problemset/problem/1550/A

    Time Complexity: O(n)
*/

/*
Analysis:

Def Beautiful array: a[i] == 1 && a[i]-2 || a[i]-1 element exist in the array.

Beauriful array:        [5,3,1]
                         5-2 = 3 exist in the array
                         3-2 = 1 exist in the array
                         Moreover a[3] =1
Not Beautiful array:    [1,4]
                         1-2 = -1 doesn't exist in the array
                         4-1 = 3 doesn't exist in the array
                         Moreover a[2] = 4

[1,2,3,4,5,6,7,8]
[1,3,4]
[1,2,3,4,5,6,7,8,9,10]
[1,2,3,4]

** Array Must contain 1 and 3(except certain cases)

*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int sum =0; int i=1; int pSize=0;
    while(sum <n) //O(n)
    {
        sum +=i;
        i +=2;
        pSize++;
    }
    cout << pSize << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); // IF YOU DON'T USE THIS, YOU WILL DEFINITELY GET TLE, BECAUSE OF SLOW I/O OPERATION
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}