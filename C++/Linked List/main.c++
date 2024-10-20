#include <iostream>
using namespace std;


struct Node{
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtHead(Node* &head, int data){
    Node *temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node * &tail, int data){
    Node *temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void printLinkedList(Node* &head){
    Node *temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){

    Node *node1 = new Node(111);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node *head = node1;
    Node *tail = node1;

    for (int i = 0; i < 10; i++){
        insertAtHead(head, i);
    }
    printLinkedList(head);

    for (int i = 0; i < 10; i++){
        insertAtTail(tail, i);
    }

    printLinkedList(head);


    return 0;
}
