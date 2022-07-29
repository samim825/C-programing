#include<bits/stdc++.h>
using namespace std;
int main(){

int t,sizeOfString;
cin>>t;
while(t--){
    string s;
    int x = 0;
    cin>>x>>s;
    sizeOfString = s.size();
    int countA = 0, countB = 0, f = 0;
    for(int i=0; i<sizeOfString; i++){
            if((s[i]=='a' && s[i+1] =='b') || (s[i]=='b' && s[i+1] =='a')){
                f=1;
                countA = i+1;
                countB = i+2;
                break;
            }
    }

    if(f){
        cout<<countA<<" "<<countB<<endl;
    }else{
        cout<<"-1 -1"<<endl;
    }
}
return 0;
}
