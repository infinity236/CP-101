/*
    Problem: Stone Game
    Link: https://codeforces.com/problemset/problem/1538/A

    Solution:

    Time Complexity: O(n^2)

Analysis:
        1 5] 4 3 2
index:  0 1 2 3 4 //2moves to pop out the min and max number

        4 2 3 1 8] 6 7 5
index:  0 1 2 3 4 5 6 7 //5 moves to pop out the min and max number

        3 4] 2 [1
index:  0 1 2 3 //3moves

        2 1] 3 4 5 6 [8 7
index:  0 1 2 3 4 5 6 7 //4 moves
        1 2           4 3

28 APR 7:30PM - 11:00 PM, 29 APR 3:00 - 3:30PM 

*/

#include <bits/stdc++.h>
using namespace std;

int findElementIndex(int key, int* arr, int size)
{
    int i = 0;
    while (key != arr[i]) // O(n)
    {
        i++;
    }
    return i + 1; // Convert index to begin from 1
}

int numMoves(int index1, int index2, int size) 
{
    int m1= min(max(index1, index2), max(size - index1 +1, size - index2 +1));
    int m2= min(index1, index2)+(size+1 - max(index1, index2));
    return min(m1, m2);
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int minNum = INT_MAX, maxNum = INT_MIN;
    int minNumIndex, maxNumIndex;

    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> arr[i];
        minNum = min(arr[i], minNum);
        maxNum = max(arr[i], maxNum);
    }

    minNumIndex = findElementIndex(minNum, arr, n); 
    maxNumIndex = findElementIndex(maxNum, arr, n); 

    cout << numMoves((minNumIndex), (maxNumIndex), n) << endl;
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