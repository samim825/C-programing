#include<bits/stdc++.h>
using namespace std;
int main(){

char x,a[30];
cin>>x;

a[0]='q';
a[1]='w';
a[2]='e';
a[3]='r';
a[4]='t';
a[5]='y';
a[6]='u';
a[7]='i';
a[8]='o';
a[9]='p';
a[10]='a';
a[11]='s';
a[12]='d';
a[13]='f';
a[14]='g';
a[15]='h';
a[16]='j';
a[17]='k';
a[18]='l';
a[19]=';';
a[20]='z';
a[21]='x';
a[22]='c';
a[23]='v';
a[24]='b';
a[25]='n';
a[26]='m';
a[27]=',';
a[28]='.';
a[29]='/';

string s;
cin>>s;
int len = s.size();
char b[len+1];

if(x=='R'){
    for(int i=0;i<len;i++){
        if(s[i]=='q')
            b[i]='q';
        else if(s[i]=='a')
            b[i]='a';
        else if(s[i]=='z')
            b[i]='z';
        else{
            for(int j=0;j<30;j++){
                if(s[i]==a[j])
                    b[i]=a[j-1];
            }
        }
    }
}else if(x=='L'){

for(int i=0;i<len;i++){
        if(s[i]=='p')
            b[i]='p';
        else if(s[i]==';')
            b[i]=';';
        else if(s[i]=='/')
            b[i]='/';
        else{
            for(int j=0;j<30;j++){
                if(s[i]==a[j])
                    b[i]=a[j+1];
            }
        }
    }


}



for(int i=0;i<len;i++)
    cout<<b[i];


return 0;
}

