#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int odd=0,even=0;
        vin(a,n);
        rep(i,0,n)
        {
            if(a[i]%2) odd++;
            else even++;
        }
        if(odd==0) {cout<<"No\n"; continue;}
        if(x==n)
        {
            if(odd%2==0) cout<<"No\n";
            else cout<<"Yes\n";
            continue;
        }
        if(x%2==0)
        {
            if(even>0) cout<<"Yes\n";
            else cout<<"No\n";
            continue;
        }
        cout<<"Yes\n";
    }
    return 0;

}
