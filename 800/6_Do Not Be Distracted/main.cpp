/*
    Problem: Do Not Be Distracted!
    Link: https://codeforces.com/problemset/problem/1520/A

    Solution:
    1. Input
    2. Check if there is a character that appears more than once after interval of other characters.
    3. If there is, break the loop and print "NO".  Else, print "YES".


    Time Complexity: O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;

/*
Analysis:
No case: DDBBCCCBBEZ, BAB, AABBCCDDEEBZZ, AAAAZAAAAA
           B    B     B B     B      B       A A
Yes case: FFGZZZY, BA, AFFFCC, YYYYY
*/

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    check = false;
                    break;
                }
            }
        }
    }
    if (check == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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