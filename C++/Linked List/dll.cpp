#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* previous;

    Node(int value){
        this -> data = value;
        this -> next = NULL;
        this -> previous = NULL;
    }
};

Node* insertAtHead(Node* head, int data){
    if (head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        return head;
    }

    Node* newNode = new Node(data);

    head -> previous = newNode;
    newNode -> next = head;
    head = newNode;

    return head;
}

Node* insertAtTail(Node* head, int data){
    Node* newNode = new Node(data);

    if (head == NULL){
        head = newNode;
        return head;
    }

    Node* temp = head;

    while (temp -> next != NULL){
        temp = temp -> next;
    }

    newNode -> previous = temp;
    temp -> next = newNode;

    return head;
}

Node* insertAtPosition(Node* head, int data, int position){
    Node* newNode = new Node(data);
    int index = 0;

    if (position == 0){
        head = insertAtHead(head, data);
        return head;
    }

    Node* temp = head;

    if (temp -> next != NULL){
        while (index != position){
            temp = temp -> next;
        }

        newNode -> previous = temp;
        newNode -> next = temp -> next;
        temp -> next -> previous = newNode;
        temp -> next = newNode;

        return head;
    }
    else{
        head = insertAtTail(head, data);
    }
}

int main(){
    
    return 0;
}