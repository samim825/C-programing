#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[5] = {1,2,3,3,4};


    int size = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    set<int> st;
    for(int i=0; i<size; i++){
            st.insert(a[i]);
    }

    for(auto x:st){
        cout<<x<<" ";
    }
    cout<<endl;



}
