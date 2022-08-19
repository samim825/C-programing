// If the value of the array is greater than 10^9 then we should use map. Because array can not contain more than 10^9 elemenets
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    map<int, int> mp;

    for(int i=0; i<size; i++){
        mp[a[i]]++;
    }

    for (auto x : mp){
            if(x.second>1){


		cout << x.first << " " << x.second << endl;
            }
    }


}

