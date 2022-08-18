
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

void inserAtLast(Node* &head, int val){

    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* cur = head;
    while(cur->next){
        cur = cur->next;
    }

    cur-> next = newNode;
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
    inserAtLast(head, 2);
    inserAtLast(head, 3);
    inserAtLast(head, 1);
    inserAtLast(head, 5);
    inserAtLast(head, 6);
    inserAtLast(head, 4);

    display(head);


}
