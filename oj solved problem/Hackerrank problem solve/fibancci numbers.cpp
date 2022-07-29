#include<bits/stdc++.h>
using namespace std;

int fibonacci(int a, int b, int n){


    int fib[100];

    fib[0] = a;
    fib[1] = b;
    for(int i=2; i<=n; i++){
        fib[i] = fib[i-1]^fib[i-2];
    }

    return fib[n];
}

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    cout<<fibonacci(a,b,n);
    return 0;
}
