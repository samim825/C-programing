#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)
        return false;


    int limit = sqrt(n+1);

    for(int i=2; i<=limit; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}
int main(){

int t,n;
cin>>t;
while(t>0){
    cin>>n;
    if(isPrime(n)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    t--;
}
}
