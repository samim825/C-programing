#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[10];

for(int i=0; i<10; i++){
        arr[i]=0;
}

int mod,num = 1234403;

while(num>0){
    mod = num%10;

    num = num / 10;

    arr[mod]++;
}

for(int i=0; i<10; i++){
    cout<<i<<" : "<<arr[i]<<endl;
    }

}
