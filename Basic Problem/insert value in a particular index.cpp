#include<bits/stdc++.h>
using namespace std;
int main(){

    int size;
    cin>>size;
    int arr[size+1];

    for(int i=0; i<size; i++){

        cin>>arr[i];
    }

    cout<<"Enter the position : ";
    int pos;
    cin>>pos;

    cout<<endl<<"Enter the new value : ";
    int value;
    cin>>value;

    for(int i= size; i>=pos; i--){
            arr[i] = arr[i-1];

    }

    arr[pos-1] = value;

    for(int i=0; i<=size; i++){

        cout<<arr[i]<<" ";
    }





}
