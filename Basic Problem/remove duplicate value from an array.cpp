#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    set<int> st;
    for(int i=0; i<size; i++){
        st.insert(a[i]);
    }

    for(auto it: st){
        cout<<it<<endl;
    }

return 0;
}
