#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,a,b;
cin>>t;

while(t>0){
    cin>>n;
    if(n%2==0){
        a=(n/2)+1;
        b=(n/2)-1;
    }else{
        a=(n/2)+1;
        b=(n/2);
    }
    cout<<b<<endl;
    t--;
}

}
