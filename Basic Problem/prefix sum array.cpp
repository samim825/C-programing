#include<bits/stdc++.h>
using namespace std;
int main(){

    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){

        cin>>arr[i];
    }
    int pre[size+1];
    pre[0] = 0;
    for(int i=1; i<size+1; i++){
        pre[i] = pre[i-1] + arr[i-1];
    }

    cout<<"Prefix sum array : ";
    for(int i=0; i<size+1; i++){
            cout<<pre[i]<<" ";
    }

    int from,to;
    cout<<"From : ";
    cin>>from;
    cout<<endl<<"To : ";
    cin>>to;

    cout<<"Result : "<<pre[to] - pre[from-1];




return 0;
}
