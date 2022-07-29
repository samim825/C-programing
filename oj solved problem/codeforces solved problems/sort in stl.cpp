#include<bits/stdc++.h>
using namespace std;

void print(int a[], int arraySize){
for(int i=0; i< arraySize; i++){
    cout<<a[i]<<" ";
}
}
int main(){

int a[]={9,0,8,5,7,2,4,1,3,6};
int asize = sizeof(a)/sizeof(a[0]);

print(a,asize);

sort(a, a+asize);
cout<<endl;

print(a,asize);


return 0;

}
