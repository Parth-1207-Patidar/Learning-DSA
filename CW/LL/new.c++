#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the head of the linked list
void insertAtHead(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a new node at the middle of the linked list
void insertAtMiddle(Node* prevNode, int newData) {
    if (prevNode == nullptr) {
        std::cout << "Previous node cannot be null." << std::endl;
        return;
    }

    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to insert a new node at the tail of the linked list
void insertAtTail(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* lastNode = *head;
    while (lastNode->next != nullptr) {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;
}

// Function to traverse and print the linked list
void traverseLinkedList(Node* head) {
    Node* currentNode = head;
    while (currentNode != nullptr) {
        std::cout << currentNode->data << " ";
        currentNode = currentNode->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    // Insert nodes at the head
    insertAtHead(&head, 3);
    insertAtHead(&head, 2);
    insertAtHead(&head, 1);

    // Insert nodes at the middle
    Node* middleNode = head->next;
    insertAtMiddle(middleNode, 4);

    // Insert nodes at the tail
    insertAtTail(&head, 5);
    insertAtTail(&head, 6);

    // Traverse and print the linked list
    traverseLinkedList(head);

    return 0;
}