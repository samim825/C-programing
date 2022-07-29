#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    int limit = sqrt(n+1);

    if(n <= 1) return false;
    if(n==2 || n==3 || n==5 || n==7) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= limit; i++){
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}
int main(){

    int n;
    cin>>n;

    if(isPrime(n) ==1){
        cout<<n<<" is Prime number"<<endl;
    }else {
        cout<<n<<" is not prime number. "<<endl;
    }

}


