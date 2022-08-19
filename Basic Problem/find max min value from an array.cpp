#include<bits/stdc++.h>
using namespace std;
int main(){


    int a[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    int mx = a[0];
    int mn = a[0];
    for(int i=1; i<size; i++){
        if(a[i] > mx){
            mx = a[i];
        }
        if(a[i]<mn){
            mn = a[i];
        }

    }

    cout<<"Maximum value : "<<mx<<endl;
    cout<<"Minimum value : "<<mn<<endl;

    return 0;
}
