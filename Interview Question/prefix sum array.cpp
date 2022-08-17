#include<bits/stdc++.h>
using namespace std;
int main(){

int n = 4;

int a[n] = {1,2,3,4};

int pre[n+1];
pre[0] = 0;
for(int i=1; i<=n;i++){
    pre[i] = pre[i-1] + a[i-1];
}

for(int i=0; i<=n; i++){

}

int lower = 1;
int upper = 3;

cout<<pre[upper+1] - pre[lower]<<endl;

}
