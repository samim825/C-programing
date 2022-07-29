#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[] = {10,20,5,25,2,35};

    int arraySize = sizeof(a)/sizeof(a[0]);

    int value = 25, cnt = 0;

    for(int i=0; i<arraySize; i++){
        if(a[i] == value){
            cout<<"Value found and the index of this value is : "<<i<<endl;
            cnt = 1;
            break;
        }
    }

    if(cnt == 0){
        cout<<"Value not found."<<endl;
    }


}
