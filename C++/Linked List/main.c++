#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* insertAtBeginning(Node* &head, int value){
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;

    return head;
}

Node* insertAtEnd(Node* &head, int value){
    Node* newNode = new Node();
    newNode -> data = value;
    Node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;

    return head;
}

Node* insertAtPosition(Node* &head, int value, int position){
    int index = 0;
    if (position == 0){
        return insertAtBeginning(head, value);
    }

    Node* newNode = new Node();
    newNode -> data = value;
    Node* temp = head;
    Node* previous = NULL;

    while (index != position && temp != NULL){
        previous = temp;
        temp = temp -> next;
        index++;
    }

    previous -> next = newNode;
    newNode -> next = temp;

    return head;
}

Node* deleteAtBeginning(Node* &head){
    Node* toDelete = head;
    head = head -> next;

    delete toDelete;

    return head;
}


Node* deleteAtEnd(Node* &head){
    Node* temp = head;
    Node* previous = nullptr;

    while (temp -> next != NULL){
        previous = temp;
        temp = temp -> next;
    }
    previous -> next = nullptr;
    delete temp;

    return head;
}

int main(){
    
    return 0;
}