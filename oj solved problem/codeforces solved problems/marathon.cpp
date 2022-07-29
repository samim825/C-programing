#include<bits/stdc++.h>
using namespace std;
int main(){

int t,a,b,c,d;
cin>>t;

while(t--){
        int cnt = 0;
    cin>>a>>b>>c>>d;

    if(b>a){
        cnt++;
    }
    if(c>a){
        cnt++;
    }
    if(d>a){
        cnt++;
    }

    cout<<cnt<<endl;
}

}
