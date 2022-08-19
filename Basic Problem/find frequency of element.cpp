#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    int frequency[1000];
    for(int i=0; i<1000; i++){
        frequency[i] = 0;
    }

    while(size--){
        frequency[a[size]]++;
    }

    for(int i=0; i<1000; i++){
            if(frequency[i]>0){


        cout<<i<<" "<<frequency[i]<<endl;
            }
    }

    return 0;
}
