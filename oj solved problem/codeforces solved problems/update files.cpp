#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

    long long n,k;

    cin>>n>>k;
    long long total = 1;
    int ans = 0;

    while(total<n){

        if(total<k){
            total += total;
            ans++;
        }
        else{
            long long need = n - total;
            int a = n/k;
            total += (a*k);
            ans = ans + a;

            if(total>=n){
            break;
            }
        }
    }


    cout<<ans<<endl;
}

}

