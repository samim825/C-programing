#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[1001],b[1000],cnt=0,sum=0;
string x,y;

cin>>n>>x>>y;


for(int i=0;i<n;i++){
    a[i]=x[i];
}
for(int i=0;i<n;i++){
    b[i]=y[i];
}

for(int i=0;i<n;i++){
    cnt = abs(a[i]-b[i]);
    if(cnt>5){
        cnt = 10-cnt;
    }
    sum = sum+cnt;
    cnt=0;
}
cout<<sum<<endl;

return 0;
}
