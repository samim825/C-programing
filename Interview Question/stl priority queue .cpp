/*
priority queue.
organize the data with the priority of those data.
It can be Max heap and Min Heap.
1. push 2. pop 3.top 4. size 5. empty

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int> pq; // By default Max heap

    pq.push(2);
    pq.push(5);
    pq.push(3);
    pq.push(1);
    pq.push(4);
    pq.push(7);

    while(!pq.empty()){
        int val = pq.top();
        cout<<val<<" ";
        pq.pop();
    }

    cout<<endl;



    priority_queue<int, vector<int>, greater<int> > pqr; // Make it Min Heap

    pqr.push(2);
    pqr.push(5);
    pqr.push(3);
    pqr.push(1);
    pqr.push(4);
    pqr.push(7);

    while(!pqr.empty()){
        int val = pqr.top();
        cout<<val<<" ";
        pqr.pop();
    }

    cout<<endl;
}
