#include<bits/stdc++.h>
using namespace std;
int main(){

string s = "samima";
string s1;
int cnt = 0;

while(s[cnt] != '\0'){
    cnt++;
}
for(int i=cnt-1; i>=0; i--){
    s1 = s1+s[i];
}

cout<<s1;

}
