/*
map works with (key, value) pair
map two kinds
1. sorted map
    * sorted
    * BST
2. unordered_map
    * unorderd/ unsorted
    * Hashing

    It has some following method:
        1. insert({key, value})
        2. count()
        3. find()
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    unordered_map<int, int> mp;

    mp.insert({1,2});
    mp.insert({2,4});
    mp.insert({3,6});
    mp.insert({4,1});
    mp.insert({5,8});
    mp[6] = 12;
    mp[7] = 14;
    mp[8] = 16;
    mp[9] = 18;


    for(auto x: mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }



}
