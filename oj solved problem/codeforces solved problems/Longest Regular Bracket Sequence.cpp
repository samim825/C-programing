#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt = 0;
    char c;
    cin>>s;
    stack<char> st;
    int len = s.size();
    for(int i=0; i<len; i++)
    {
        if(st.empty() || s[i]=='(')
        {
            st.push(s[i]);
        }
        else
        {
            c = st.top();
            if(s[i]=='(' && c == ')')
            {
                cnt++;
                st.pop();
            }
            else if(s[i]==')' && c == '(')
            {
                cnt++;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    if(cnt == 0)
    {

        cout<<0<<" "<<1<<endl;
    }
    else
    {

        cout<<cnt<<" "<<len-(cnt*2)<<endl;
    }
}

