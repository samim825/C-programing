/*
queue
1. push 2.pop 3. front 4. back 5. size 6. empty
deque
1. push_back 2. push_back 3. pop_back 4. pop_front. 5. size 6. empty 7. front 8.back

we can push/pop in queue only from one side.
But we can push/pop in deque from both side. from front and from back side;
 */
#include<bits/stdc++.h>
using namespace std;
int main(){

queue<int> q;

q.push(1);
q.push(2);
q.push(3);
q.push(4);

cout<<q.size()<<endl;
cout<<"Front value :  "<<q.front()<<endl;
cout<<"Back value : "<< q.back()<<endl;

while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
cout<<endl;

deque<int> dq;

dq.push_back(1);
dq.push_back(2);
dq.push_front(3);
dq.push_back(4);
dq.push_front(5);



cout<<"Size : "<<dq.size()<<endl;
cout<<"Front value : "<<dq.front()<<endl;
cout<<"Back Value : "<<dq.back()<<endl;

cout<<"Deque Value : ";
while(!dq.empty()){
    cout<<dq.back()<<" "; // we can print from front/ back sides
    dq.pop_back();
}


}

