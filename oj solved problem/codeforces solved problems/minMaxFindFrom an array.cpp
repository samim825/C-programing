#include<bits/stdc++.h>
using namespace std;
int main(){

int a[] = {10,20,5,25,2,35};

int minimumValue = a[0];
int maxValue = a[0];

for(int i=1; i<6; i++){
    if(a[i] > maxValue){
        maxValue = a[i];
    }

    if(a[i] < minimumValue){
        minimumValue = a[i];
    }
}

cout<<maxValue<<endl<<minimumValue<<endl;

}
