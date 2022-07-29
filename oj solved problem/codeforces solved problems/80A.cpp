#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    else if(n==2) return true;
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
                return false;
        }
    }

    return true;
}

int main(){

int n,m,prime=0;

cin>>n>>m;

int num = n+1;
smm:
    if(isPrime(num)){
        prime = num;
    }else{
    num++;
    goto smm;
    }

    if(prime == m){
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }

return 0;
}
