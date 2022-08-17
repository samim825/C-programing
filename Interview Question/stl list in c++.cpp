/*List is also called linked list. It has some popular method. these are
1. push_front -> add an element at the first of the list
2. push_back -> add an element at the end of the list
3. front -> return first element of the list
4. back -> return last element of the list
5. pop_front -> delete element from the start of the list
6. pop_back -> delete last element of the list
7. reverse ->
8. sort ->

*it - > value at it. it means location.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    list<int> l;

    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_back(40);
    l.push_back(150);
    l.push_back(100);
    l.push_back(70);

    list<int> :: iterator it; // it can declare only one time
    for(it = l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;

    l.pop_back();
    l.pop_front();

    for(it = l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    l.reverse();
    cout<<" Reverse list : ";
    for(it = l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    l.sort();
    cout<<" Sorted list : ";
    for(it = l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<" ";
    }
}
