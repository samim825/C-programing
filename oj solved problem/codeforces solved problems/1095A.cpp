#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
char a[60],b[11];

cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i];
}



int j=0;
for(int i=0;i<=n;i=i+j){
    b[j]=a[i];
    j++;
}

for(int x=0;x<j-1;x++){
    cout<<b[x];
}


    return 0;

}
