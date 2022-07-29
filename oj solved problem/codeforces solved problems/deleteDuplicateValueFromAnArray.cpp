#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {10 ,20, 10, 1, 100, 10 ,2 ,1, 5, 10};

int sizeOfArray = 10;

for(int i=0; i<sizeOfArray; i++){
    for(int j=i+1; j<sizeOfArray; j++){
        if(arr[i] == arr[j]){
            for(int k=j; k<sizeOfArray; k++){
                arr[k] = arr[k+1];
            }

            sizeOfArray--;
            j--;
        }
    }
}

for(int i=0; i<sizeOfArray; i++){
    cout<<arr[i]<<endl;
}

}
