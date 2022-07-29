#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b){

    int j=0;
    for(int i=a; i>=1; i--){
            j++;
        if(b%i==0){
            cout<<"Total visit in findGCD function : "<<j<<endl;
            return i;
        }
    }

}

int gcd(int a, int b){


    if(b==0) return a;

    gcd(b, a%b);
}

int main(){
    int a, t,b;
    cin>>t;
    while(t--){
        cin>>a>>b;

    cout<<gcd(a,b)<<endl;
    cout<<findGCD(a,b)<<endl;
    }

}
