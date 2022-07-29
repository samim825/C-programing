#include<bits/stdc++.h>
using namespace std;
int main(){
int weightOfLimak,weightOfBob,numberOfYear=0;

cin>>weightOfLimak>>weightOfBob;

while(1){
    if(weightOfLimak>weightOfBob){
        break;
    }else{
    weightOfLimak = weightOfLimak*3;
    weightOfBob = weightOfBob *2;
    numberOfYear++;
    }
}
cout<<numberOfYear<<endl;
}
