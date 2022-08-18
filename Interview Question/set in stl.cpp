/*set
* features of set
1. sorted order
2. no duplicate

#set
* sorted
* BST
* average case O(logN)
* worst case O(N)
#unordered_set
* unsorted
* Hashing
* average case O(1)
* worst case O(N)

* method of set

1. insert() -> insert an element in the set. And it automatically inserted in a sorted way.Because at the backend it uses Binary Search Tree(BST).
2. find() -> find location of a value.
3. erase() -> search an element then delete the elemenet. like erase(value);
4. count() -> count a value is absent or present
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int> s;
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(3);



    // check an element is absent or present
    if(s.count(6)){
        cout<<"6 is present"<<endl;
    }else{
        cout<<"6 is absent"<<endl;
    }

    cout<<s.count(3)<<endl;
    cout<<s.count(7)<<endl;

    //erase an element from the set
    s.erase(3);

    // Print element of the set
    for(auto x:s){
        cout<<x<<" ";;
    }

    cout<<endl;


}
