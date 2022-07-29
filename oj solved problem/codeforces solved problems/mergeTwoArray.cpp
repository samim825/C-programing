#include<bits/stdc++.h>
using namespace std;
int main(){

int arr1[] = {20,10,5,2,4};

int arr2[] = {12, 36, 3, 10, 24};

int m = sizeof(arr1)/sizeof(int);
int n = sizeof(arr2)/sizeof(int);
int s = *(&arr1+1)-arr1;
int newArray[m+n];

for(int i=0; i<5; i++){
    newArray[i] = arr1[i];
}

for(int i = 0; i<5; i++){

    newArray[m] = arr2[i];
    m++;
}

for(int i=0; i<10; i++){
    cout<<newArray[i]<<endl;
}

}
