/* in c++ STL vactor has some built-in method.
vector is a dynamic arry
1. push_back() -> use to insert data in the vector at the end
2. pop_back() -> use to delete  data from the end
3. size() -> use to find size of the vector
4. resize(int x) -> use to resize the vector dynamically
5. empty() -> to check a vector is empty or not
6. begin() -> use to get starting index and *(vec.begin()) use to find starting value
7. end() -> use to get ending index and *(vec.end()) use to find starting value
8.insert() -> use to insert a value in a particular location
9. reverse() -> reverse the vector
10. sort() -> use to sort a vector
11. clear() -> use to clear the vector
12. erase() -> use to delete a value using location

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(11);
    vec.push_back(5);

    cout<<vec.size()<<endl;
    for(int i=0; i < vec.size(); i++)
        cout<<vec[i]<<" ";

    cout<<endl;
    vec.pop_back();
    for(int i=0; i < vec.size(); i++)
        cout<<vec[i]<<" ";

    cout<<endl;

    cout<<*(vec.begin())<<endl;
    cout<<*(vec.end())<<endl;

    vec.erase(vec.begin());
    vec.erase(vec.begin()+1);


    cout<<vec.size()<<endl;
    for(int i=0; i < vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;

// Insert a value at a particular address
    vec.insert(vec.begin()+2, 8);
    for(int i=0; i < vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;

// Sort a vector
    sort(vec.begin(), vec.end());
    for(int i=0; i < vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;

// Reverse e vector
    reverse(vec.begin(), vec.end());
    for(int i=0; i < vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;



}
