#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int x = (k*l)/nl;
int y = c*d;
int z = p/np;

int minimum = min(x,y);
minimum = min(minimum, z);

cout<<minimum/n<<endl;
}
