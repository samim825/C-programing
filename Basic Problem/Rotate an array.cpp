#include<bits/stdc++.h>
using namespace std;
int main(){

    int size;
    cin>>size;
    int arr[size+1];

    for(int i=0; i<size; i++)
    {

        cin>>arr[i];
    }

    int k;
    cin>>k;
    int x = k%size;

    vector<int> vec;
    for(int i=size-x; i<size; i++){
        vec.push_back(arr[i]);
    }

    for(int i=0; i<size-x; i++){
        vec.push_back(arr[i]);
    }

    for(int i=0; i<size; i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}
