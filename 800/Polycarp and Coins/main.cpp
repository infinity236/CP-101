#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n; cin>>n;
    int a, b;
    int res = n/3;
    a = res; b= res;

    if(n%3 == 1){
        a++;
    }
    else if(n%3 == 2){
        b++;
    }
    cout << a << " " << b << endl;
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