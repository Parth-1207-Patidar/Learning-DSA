#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int data){
    Node* newNode = new Node;
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

void insertAtHead(Node* &head, int data){
    Node* temp = createNode(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = createNode(data);
    tail -> next = temp;
    tail = temp;
}

int main(){
    int head = 1;
    int tail = 1;
    
    return 0;
}