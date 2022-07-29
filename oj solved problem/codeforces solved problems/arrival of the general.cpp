#include<bits/stdc++.h>
using namespace std;
int main(){

int numberOfSoldiers,height[100],result;
cin>>numberOfSoldiers;
for(int i=1;i<=numberOfSoldiers;i++){
    cin>>height[i];
}

int minimum=height[1],maximum=height[1],minimumIndex=1,maximumIndex=1;
for(int i=1;i<=numberOfSoldiers;i++){
    if(height[i]<=minimum){
        minimum=height[i];
        minimumIndex=i;
    }
}

for(int i=1;i<=numberOfSoldiers;i++){
    if(height[i]>maximum){
        maximum=height[i];
        maximumIndex=i;
    }
}

if(minimumIndex<maximumIndex){
    result = maximumIndex+(numberOfSoldiers-minimumIndex-2);
}else{
    result = (maximumIndex-1)+(numberOfSoldiers-minimumIndex);
}



cout<<result<<endl;

return 0;
}
