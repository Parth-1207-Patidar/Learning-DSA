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

void insertAtHead(Node *head, int data){
    Node *temp = createNode(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node *tail, int data){
    Node *temp = createNode(data);
    tail -> next = temp;
    tail = temp;
}

void traverse(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){
    int data;
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter data: ";
    cin >> data;
    insertAtHead(head, data);
    // cout << "Enter data: ";
    // cin >> data;
    // insertAtTail(tail, data);
    traverse(head);
    traverse(tail);

    return 0;
}