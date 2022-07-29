#include<bits/stdc++.h>
using namespace std;

int main(){

int t,a,b,result;
cin>>t;

while(t>0){

    cin>>a>>b;

    if(a%b==0){
        cout<<0<<endl;
    }else{
    cout<<(b-a%b)<<endl;
    }

    t--;
}

return 0;
}
