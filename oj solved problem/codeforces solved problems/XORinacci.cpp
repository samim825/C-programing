#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n,t;

    cin>>t;
    while(t>0){
        cin>>a>>b>>n;
        if(n%3==0){
            cout<<a<<endl;
        }else if(n%3==1){
            cout<<b<<endl;
        }else{
            int res = a^b;
            cout<<res<<endl;
            res = 0;
        }
        t--;
    }
    return 0;
}
