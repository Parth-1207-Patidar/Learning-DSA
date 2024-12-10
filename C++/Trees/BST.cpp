#include <iostream>
#include <queue>
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


void levelOrderTraversal(Node* root){
    if (root == NULL){
        return;
    }

    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        cout << current -> data << " ";
        q.pop();

        if (current -> left != NULL){
            q.push(current -> left);
        }
        if (current -> right != NULL){
            q.push(current -> right);
        }
    }
}


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


bool isBST(Node* root){
    static Node* prev = NULL;

    if (root == NULL){
        return true;
    }
    else{
        if (isBST(root -> left) == false){
            return false;
        }
        if (prev != NULL && root -> data <= prev -> data){
            return false;
        }
        prev = root;

        if (isBST(root -> right) == false){
            return false;
        }
        return true;
    }
}

Node * searchBST(Node * root, int key){
    if (root == NULL){
        return NULL;
    }
    if (root -> data == key){
        return root;
    }
    else if (root -> data > key){
        return searchBST(root -> left, key);
    }
    else{
        return searchBST(root -> right, key);
    }

    return NULL;
}


Node * searchBSTIterative(Node * root, int key){
    while (root != NULL){
        if (root -> data == key){
            return root;
        }
        else if (root -> data > key){
            root = root -> left;
        }
        else{
            root = root -> right;
        }
    }

    return NULL;
}


Node * insertBST(Node * root, int key){
    if (root == NULL){
        return new Node(key);
    }
    if (root -> data > key){
        root -> left = insertBST(root -> left, key);
    }
    else{
        root -> right = insertBST(root -> right, key);
    }

    return root;
}


Node * inOrderPredecessor(Node * root){
    root = root -> left;
    while (root -> right != nullptr){
        root = root -> right;
    }
    return root;
}


Node * deleteNode(Node * root, int key){

    Node * iPre;

    if (root == NULL){
        return NULL;
    }
    if (root -> right == NULL && root -> left == NULL){
        delete root;
        return NULL;
    }

    if (root -> data < key){
        root -> right = deleteNode(root -> right, key);
    }
    else if (root -> data > key){
        root -> left = deleteNode(root -> left, key);
    }
    else{
        iPre = inOrderPredecessor(root);
        root -> data = iPre -> data;
        root -> left = deleteNode(root -> left, iPre -> data);
    }

    return root;
}


int main(){

    Node* root = new Node(5);
    Node* left = new Node(2);
    root -> left = left;
    root -> right = new Node(6);
    root -> left -> left = new Node(1);
    root -> left -> right = new Node(4);
    insertBST(root, 9);
    insertBST(root, 7);
    insertBST(root, 8);
    insertBST(root, 3);


    //           5
    //          / \
    //         2   6
    //        / \   \
    //       1   4   9
    //          /   /
    //         3   7
    //              \
    //               8


    // cout << isBST(root);
    // preOrderTraversal(root);
    // cout << endl;

    // inOrderTraversal(root);
    // cout << endl;

    // postOrderTraversal(root);
    // cout << endl;

    // root = deleteNode(root, 5);

    // preOrderTraversal(root);
    // cout << endl;

    // inOrderTraversal(root);
    // cout << endl;

    // postOrderTraversal(root);
    // cout << endl;

    levelOrderTraversal(root);
    
    return 0;
}