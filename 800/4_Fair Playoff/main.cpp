/*
    Problem: Fair Playoff
    Link: https://codeforces.com/problemset/problem/1535/A

    Solution:
    1. Input
    2. Divide the array into 2 part and get the largest element of each part (P1, P2)
    3. Compare the largest element of each part with the other part except P1 and P2
    4. If all elements are less than P1 and P2, then print YES else print NO
*/

#include <bits/stdc++.h>
using namespace std;

int round1(int *arr, int size)
{
    // sort first half of the array and get the largest element
    sort(arr, arr + (size / 2));
    int P1 = arr[(size / 2) - 1];

    // sort second half of the array and check if all elements are greater than P1
    sort(arr + size / 2, arr + size);
    for (int i = size / 2; i < (size - 1); i++)
    {
        if (arr[i] > P1)
        {
            return 0;
        }
    }
    return 1;
}

int round2(int *arr, int size)
{
    // sort second half of the array and get the largest element
    sort(arr + size / 2, arr + size);
    int P2 = arr[size - 1];

    // sort first half of the array and check if all elements are less than P2
    sort(arr, arr + (size / 2));
    for (int i = 0; i < (size / 2) - 1; i++)
    {
        if (arr[i] > P2)
        {
            return 0;
        }
    }
    return 1;
}

void solve(int player)
{
    int skill[player];
    for (int i = 0; i < player; i++)
    {
        cin >> skill[i];
    }

    if (round1(skill, player) == 1 && round2(skill, player) == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    int player = t;
    while (t--)
    {
        solve(4);
    }

    return 0;
}