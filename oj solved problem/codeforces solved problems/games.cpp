#include<bits/stdc++.h>
using namespace std;
int main(){

int n,home[101],abroad[101],cnt=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>home[i]>>abroad[i];
}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(home[i]==abroad[j])
            cnt++;
         if(abroad[i]==home[j])
                cnt++;
    }

}
cout<<cnt<<endl;

return 0;
}
