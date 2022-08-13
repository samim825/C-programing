#include<bits/stdc++.h>
using namespace std;
string current_page;
stack<string> st;
string moveBackword(){

    current_page = st.top();
    st.pop();

    return current_page;

}

void addNew(string new_page){
    st.push(new_page);

    current_page = new_page;
}

int main(){

    string s;
    while(cin>>s){
        if(s == "back"){
            cout<<moveBackword()<<endl;
        }else{
            addNew(s);
        }
    }

}
