#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;

    Node (int data){
        this -> data = data;
        left = nullptr;
        right = nullptr;
    }
};


void preOrderTraversal(Node* root){
    if (root != NULL){
        cout << root -> data << " ";
        preOrderTraversal(root -> left);
        preOrderTraversal(root -> right);
    }
}


void postOrderTraversal(Node* root){
    if (root != nullptr){
        postOrderTraversal(root -> left);
        postOrderTraversal(root -> right);
        cout << root -> data << " ";
    }
}


void inOrderTraversal(Node* root){
    if (root != NULL){
        inOrderTraversal(root -> left);
        cout << root -> data << " ";
        inOrderTraversal(root -> right);
    }
}


int main(){

    Node* root = new Node(4);
    Node* left = new Node(1);
    root -> left = left;
    root -> right = new Node(6);
    root -> left -> left = new Node(5);
    root -> left -> right = new Node(2);


    //           4
    //          / \
    //         1   6
    //        / \
    //       5   2


    preOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    
    return 0;
}