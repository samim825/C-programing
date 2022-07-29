#include<bits/stdc++.h>
using namespace std;
int main(){
int a[5][5],b,c;

//Take input of matrix
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>a[i][j];
    }
}

//Find position of 1
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(a[i][j]==1){
            b=i;
            c=j;
            break;
        }
    }
}

//find shortest path

int result = abs(b-2)+abs(c-2);
cout<<result<<endl;

return 0;

}
