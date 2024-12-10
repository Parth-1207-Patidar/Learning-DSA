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
    delete temp; // temp itself is the last node

    return head;
}

Node* deleteAtPosition(Node* &head, int position){
    if (position == 0){
        return deleteAtBeginning(head);
    }

    Node* temp = head;
    Node* toDelete = nullptr;
    int index = 0;

    while (index != position - 1 && temp != NULL){
        temp = temp -> next;
        index++;
    }

    toDelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete toDelete;

    return head;
}

int main() {
    Node* head = nullptr;

    // Insert at beginning
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 15);

    // Insert at end
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 25);
    head = insertAtEnd(head, 30);

    // Insert at position
    head = insertAtPosition(head, 35, 2);
    head = insertAtPosition(head, 40, 4);
    head = insertAtPosition(head, 45, 6);

    // Delete at beginning
    head = deleteAtBeginning(head);

    // Delete at end
    head = deleteAtEnd(head);

    // Delete at position
    head = deleteAtPosition(head, 2);

    // Print the linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}