#include<bits/stdc++.h>
using namespace std;

int qu[5] = {0};
int rear = 0;
int front = 0;
int size = 0;
int capacity = 5;

bool isFull(){
    if(size == capacity) return true;
    else return false;
}

bool isEmpty(){
    if(size == 0) return true;
    else return false;
}

void enqueue(int data){

    if(isFull()){
        cout<<"Queue is full."<<endl;
        return;
    }

        qu[rear] = data;
        rear = (rear+1)%capacity;
        size++;
}

void dequeue(){

    if(isEmpty()){
        cout<<"Queue is empty."<<endl;
        return;
    }

        int item = qu[front];
        cout<<item<<endl;
        front = (front+1)% capacity;
        size--;

}

void display(){

    if(isEmpty()){
        cout<<"Queue is empty."<<endl;
        return;
    }
    cout<<qu[front]<<" ";
    for(int i = front+1; i != rear; i++){
            if(i == capacity){
                i = -1;
                continue;
            }
        cout<<qu[i]<<" ";
    }
    cout<<endl;

}


int main(){

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    display();
    dequeue();
    display();

}
