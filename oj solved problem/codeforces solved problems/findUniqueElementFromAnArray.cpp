#include<bits/stdc++.h>
using namespace std;
int main(){


int arr[] = {1,2,3,1,2,4,5,6,2,3,4,7,8};

int arr1[10001] = {0};


for(int i=0; i<13; i++){
    arr1[arr[i]]++;
}

for(int i=0; i<10001; i++){
    if(arr1[i]==1){
        cout<<i<<endl;
    }
}

}
