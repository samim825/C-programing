#include<bits/stdc++.h>
using namespace std;
int main(){

    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){

        cin>>arr[i];
    }


    int n = size/2;
    for(int i=0; i<n; i++){
            int temp = arr[size-1-i];
            arr[size-1-i] = arr[i];
            arr[i] = temp;
    }


    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
