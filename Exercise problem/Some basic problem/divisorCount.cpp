#include<bits/stdc++.h>
using namespace std;
int main(){

int n,divisorCount=0;

cin>>n;

for(int i=1;i<=n;i++){
    if(n%i==0){
        divisorCount++;
        cout<<i<<endl;
    }
}

cout<<"Total divisor is : "<<divisorCount<<endl;

return 0;
}
