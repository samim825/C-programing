
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int testcase,n;
    cin>>testcase;
    while(testcase--)
    {


        int cnt = 0;
        char c;
        cin>>n;
        stack<char> st;
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        for(int i=0; i<n; i++)
        {
            if(st.empty() && s[i]=='(')
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
                else
                {
                    st.push(s[i]);
                }
            }
        }

        cout<<"Count : "<<cnt<<endl;
        int exist = n - (cnt*2);
        cout<<exist/2 <<endl;


    }
}

