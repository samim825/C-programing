#include<bits/stdc++.h>
using namespace std;
int main(){
string s;

cin>>s;
int length=s.size();

for(int i=0;i<length;i++){
    if((s[i]=='W')&&(s[i+1]=='U')&&(s[i+2]=='B')){
            i=i+2;
    cout<<" ";
        continue;
    }else{
    cout<<s[i];
    }
}



return 0;
}
