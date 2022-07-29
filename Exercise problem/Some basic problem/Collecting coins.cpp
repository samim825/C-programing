#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,t;

    cin>>t;
    while(t>0){
           cin>>a>>b>>c>>n;

           if((a==b)&&(b==c)){
            cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }

        t=t-1;
    }
}
