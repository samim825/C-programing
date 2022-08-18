#include<bits/stdc++.h>
using namespace std;
int main()
{


    string s = "abc";
    int cnt = 0;

    do
    {
        cnt++;
        if(cnt == 2)
        {
            cout<<s<<endl;
            break;
        }
        else
            continue;
    }
    while(next_permutation(s.begin(), s.end()));
}
