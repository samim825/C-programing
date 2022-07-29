#include<bits/stdc++.h>
using namespace std;
int main(){

 vector<int> v(26,0);

 int index;

 string s;
 cin>>s;




for(int i=0;i<s.size();i++){
    if('a'<=s[i] && s[i]<='z'){
        index=s[i]-'a';
    }else if('A'<=s[i] && s[i]<='Z'){
        index=s[i]-'A';
    }
    v[index]++;
}

for(int i=0;i<=25;i++){

    printf("%c = %d times.\n",(97+i),v[i]);
}

}
