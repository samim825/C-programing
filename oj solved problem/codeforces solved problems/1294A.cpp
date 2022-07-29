#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c,n,s,maxt,t;

cin>>t;
while(t--){
    cin>>a>>b>>c>>n;
maxt = max(a, max(b,c));
s = a + b + c + n;

if(s%3==0 && s/3>=maxt){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}

return 0;
}
