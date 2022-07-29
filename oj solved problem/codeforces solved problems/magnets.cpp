#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[100000],cnt=0;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
}
cout<<endl;
for(int i=1;i<=n;i++){
    if(a[i]!=a[i+1]){
        cnt++;
    }
}

cout<<cnt<<endl;

}
