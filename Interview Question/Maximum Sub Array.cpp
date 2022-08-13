#include<bits/stdc++.h>
using namespace std;
int main(){

int a[] = {1,2,3,4};
int sizeOfArray = sizeof(a)/sizeof(a[0]);

for(int i=0; i<sizeOfArray; i++){
    for(int j=i; j<sizeOfArray; j++){
        for(int k=i; k<=j; k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}

}
