/*pair is a STL in C++ Language.
to make a pair we can use it.
pair<int,int> p; using this syntax pair can declare.
pair<int, pair<int, int>> pt; using this syntax chaining pair can declare.
it can be access by p.first and p.second to access first and second element.

vector< pair<int,int>> vp -> vector pair
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    pair<int, int> p;

    p.first = 1;
    p.second = 2;

    cout<<"{"<<p.first<<","<<p.second<<"}"<<endl;

    pair<int, pair<int, int> > pt;

    pt.first = 1;
    pt.second.first = 5;
    pt.second.second = 6;

    cout<<"{"<<pt.first<<",{"<<pt.second.first<<","<<pt.second.second<<"}"<<endl;

    vector<pair<int, int> > vp;

   int n,x,y;
   cin>>n;

   for(int i=0; i<n; i++){
    cin>>x>>y;
    vp.push_back(make_pair(x,y));
   }

   cout<<vp.size()<<endl;

   for(int i=0; i<n; i++){
    cout<<vp[i].first<<" "<<vp[i].second<<endl;
   }

}
