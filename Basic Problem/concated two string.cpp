#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1 = "samim ";
    string s2 = "hossain";

    int cnt = 0;

    while(s1[cnt]!='\0'){
        cnt++;
    }


    cout<<"First s1 : "<<s1;
    cout<<endl<<"Length : "<<cnt<<endl;

    for(int i = 0; s2[i]!='0'; i++ ){
        s1[cnt] = s2[i];
        cnt++;
    }

    s1[cnt+1] = '\0';

    cout<<s1<<endl;
}
