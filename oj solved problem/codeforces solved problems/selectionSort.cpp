#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {9,8,7,5,3};

int len = sizeof(arr)/sizeof(arr[0]);
int min_index,temp;
cout<<len<<endl;

for(int i=0; i<len; i++){
        min_index = i;
    for(int j=i+1; j<len; j++){
        if(arr[i]>arr[j]){
            min_index = j;
        }
    }
    temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;

}

for(int i=0; i<len; i++){
    cout<<arr[i]<<" ";
}
}
