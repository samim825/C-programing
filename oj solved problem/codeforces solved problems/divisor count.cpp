#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long divisorCount(ll n, ll k){


    set<ll> s;
    ll it;

    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    ll found = 1;
    for(it:s){
        if(found==k){
            return it;
        }else{
            found++;
        }
    }
    ll a = -1;
    return a;
}

int main(){

    ll n,k;
    cin>>n>>k;
    cout<<divisorCount(n,k)<<endl;
}
