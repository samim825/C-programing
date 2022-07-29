#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {20,10,5,2,4,12,20,5,2};

int sizeOfArray = *(&arr+1)-arr;

int a[10001] = {0};

for(int i=0; i<sizeOfArray; i++){
    a[arr[i]]++;
}

for(int i=0; i<=10000; i++){
    if(a[i]>0){
        cout<<"The frequency of : "<<i<<" is : "<<a[i]<<endl;
    }
}

}
