#include<bits/stdc++.h>
using namespace std;
int main(){

int a[1000],number,t,i;

cin>>t;
while(t>0){

cin>>number;
a[0] = 0;
a[1] = 1;
for( i=2;i<=number;i++){
    a[i] = a[i-1]+a[i-2];
}
for( i=0;i<=number-1;i++){
    cout<<a[i]<<" , ";
}
if( i==number)
    cout<<a[i];


t--;
}
}

