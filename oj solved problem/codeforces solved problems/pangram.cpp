#include<bits/stdc++.h>
using namespace std;


bool isPangram(string str,int n)
{
    vector<bool> mark(26,false);
    int index;


    for(int i=0; i<n; i++)
    {
        if('A'<=str[i] && str[i]<='Z')
        {
            index = str[i]-'A';
        }
        else if('a'<=str[i] && str[i]<='z')
        {
            index=str[i]-'a';
        }
        mark[index]=true;
    }
    for(int i=0; i<=25; i++)
    {
        if(mark[i]==false)
        {
            return false;
            break;
        }
    }
    return true;

}


int main()
{

    int n;
    string a;
    cin>>n;
    cin>>a;

    if(isPangram(a,n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
