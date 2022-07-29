#include<bits/stdc++.h>
using namespace std;
int main(){

int n,a[101],maximum=0,cnt=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    if(a[i]>maximum){
        maximum=a[i];
    }
}
for(int i=0;i<n;i++){
    cnt = cnt+(maximum-a[i]);
}
cout<<cnt<<endl;



return 0;
}
