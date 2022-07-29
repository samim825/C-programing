#include<bits/stdc++.h>
using namespace std;
int main(){

map<int, int> mp;

int arr[] = {10,20,30,10,20,30,40};
int sizeOfArray = 7;
cout<<sizeOfArray<<endl;

int maxNumber = mp.max_size();

cout<<"Max number " <<maxNumber;

for(int i=0; i<7;i++){
    mp[arr[i]]++;
}

for(auto& it : mp){

    cout<<it.first<<it.second<<endl;
}

}
