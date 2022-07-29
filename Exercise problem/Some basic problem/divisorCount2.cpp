#include<bits/stdc++.h>
using namespace std;
int main(){

int n,divisorCount=0;

cin>>n;
for(int i=1;i*i<=n;i++){
    if(i*i==n){
            cout<<n<<endl;
        divisorCount++;
    }else if(n%i==0){
    divisorCount+=2;
    cout<<i<<endl<<n/i<<endl;
    }
}



cout<<"Total divisor is : "<<divisorCount<<endl;



return 0;
}
