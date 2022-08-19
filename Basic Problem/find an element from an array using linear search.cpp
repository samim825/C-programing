#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[100];
    int size;

    cin>>size;

    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    int element;
    cout<<"Enter the finding element :"<<endl;
    cin>>element;

    for(int i=0; i<size; i++){
        if(a[i] == element){
            cout<<"find"<<endl;
            return 0;
        }

    }

    cout<<"Not find"<<endl;

}
