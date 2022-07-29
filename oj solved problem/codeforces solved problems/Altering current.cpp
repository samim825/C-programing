#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    char c;
    cin>>s;
    stack<char> st;
    int len = s.size();
    for(int i=0; i<len; i++){
        if(st.empty()){
            st.push(s[i]);
        }else{
           c = st.top();
            if(s[i]=='+' && c == '+'){
                st.pop();
            }else if(s[i]=='-' && c == '-'){
                    st.pop();
            }else{
                    st.push(s[i]);
                }
        }
    }

    if(st.empty()){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
