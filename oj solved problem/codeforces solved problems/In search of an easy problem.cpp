#include<bits/stdc++.h>
using namespace std;
int main(){

int n,a[100],isHard=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++){
    if(a[i]==1){
        isHard=1;
        break;
    }
}
if(isHard==1){
    cout<<"HARD"<<endl;

}else
cout<<"EASY"<<endl;

return 0;

}
