#include<bits/stdc++.h>
#include<iterator>
#include<set>
using namespace std;
int main(){

set<int, greater<int>> s;

s.insert(4);
s.insert(4);
s.insert(6);
s.insert(7);
s.insert(8);
s.insert(9);
set<int, greater<int> >::iterator it;
for(int it=s.begin(); it !=s.end(); it++){
    cout<<*it<<endl;
}


}
