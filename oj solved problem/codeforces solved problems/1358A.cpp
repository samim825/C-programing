#include<bits/stdc++.h>
using namespace std;
int main(){

int t,n,m;
cin>>t;
while(t--){
    cin>>n>>m;
    int mul = n*m;
    if(mul%2!=0){
        cout<<(mul/2)+1<<endl;
    }else{
        cout<<mul/2<<endl;
    }
}
return 0;
}
