#include<bits/stdc++.h>
using namespace std;
int main(){

    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){

        cin>>arr[i];
    }

    int newArray[size];

    for(int i=0; i<size; i++){
        newArray[i] = arr[size-i-1];
    }

    for(int i=0; i<size; i++){
        cout<<newArray[i]<<" ";
    }

    return 0;

}
