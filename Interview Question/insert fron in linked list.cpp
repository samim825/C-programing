#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

void inserAtFront(Node* &head, int val){

    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    newNode-> next = head;
    head = newNode;
    return;
}

void display(Node* head){

    while(head!= NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }
}


int main(){

    Node* head = NULL;
    inserAtFront(head, 2);
    inserAtFront(head, 3);
    inserAtFront(head, 1);
    inserAtFront(head, 5);
    inserAtFront(head, 6);
    inserAtFront(head, 4);

    display(head);


}
