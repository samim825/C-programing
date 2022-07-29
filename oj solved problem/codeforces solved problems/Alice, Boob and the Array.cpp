#include<bits/stdc++.h>
using namespace std;
int main(){

int t,n,a[300001],cnt = 1;
cin>>t;
while(t--){
    int sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]>0){
            sum = sum+a[i];
        }

    }

    cout<<sort(a,a+n)<<endl;
    cout<<"Case "<<cnt<<":"<<sum<<endl;
    cnt++;

}

}
