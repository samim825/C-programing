#include<bits/stdc++.h>
using namespace std;
int main(){
int n,cnt = 1;
cin>>n;
for(int i=2; i<=n/2; i++){
    if(n%i == 0){
        cnt++;
    }
}
cout<<cnt<<endl;
return 0;
}
