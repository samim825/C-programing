#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<int> vec;
    int n, data;
    cin>>n;
    while(n--){
        cin>>data;
        vec.push_back(data);
    }
    int x,a,b;
    cin>>x>>a>>b;

    vec.erase(vec.begin()+(x-1));

    for(int i = a;  i<b; i++){
        vec.erase(vec.begin()+i-1);
    }

    cout<<vec.size()<<endl;
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}

