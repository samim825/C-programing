#include<bits/stdc++.h>
using namespace std;
int main(){

int t,a,n;
cin>>t;
while(t--){
    cin>>a;
    n = 180-a;
    if(360%n ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
