#include<bits/stdc++.h>
using namespace std;
int main(){

int t, n;
cin>>t;
while(t--){
    int cnt=0;
    cin>>n;

    while(n%6==0){
        n/=6;
        cnt++;
    }
    while(n%3==0){
        n/=3;
        cnt+=2;
    }
    if(n==1){
        cout<<cnt<<endl;
    }else{
    cout<<-1<<endl;
    }

}
return 0;
}
