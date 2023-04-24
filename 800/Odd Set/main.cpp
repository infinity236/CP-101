#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int ans=0;
    for(int i=0; i<(2*n); i++){
        int x; cin>>x;
        if (x%2 == 1) ans++;
    }

    if(ans == n) cout << "YES" << endl;
    else cout << "NO" << endl; 

}
int main(){

    int t; cin>> t;
    while(t--)
    {
        solve();
    }
    return 0;
}