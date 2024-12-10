#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int key){
        this -> data = key;
        this -> left = NULL;
        this -> right = NULL;
        this -> height = 1;
    }
};

int getHeight(Node* root){
    if (root == NULL){
        return 0;
    }
    return root -> height;
}


int getBalance(Node* root){
    if (root == nullptr){
        return 0;
    }

    return getHeight(root -> left) - getHeight(root -> right);
}


Node* leftRotate(Node * root){
    Node* p1 = root -> left;
    Node* c2 = p1 -> right;

    p1 -> right = root;
    root -> left = c2;

    root -> height = 1 + max(getHeight(root -> left), getHeight(root -> right));
    p1 -> height = 1 + max(getHeight(p1 -> left), getHeight(p1 -> right));

    return p1;
}


Node * rightRotate(Node* root){
    Node* p2 = root -> right;
    Node* c1 = p2 -> left;

    p2 -> left = root;
    root -> right = c1;

    root -> height = 1 + max(getHeight(root -> left), getHeight(root -> right));
    p2 -> height = 1 + max(getHeight(p2 -> left), getHeight(p2 -> right));

    return p2;
}


Node* rightLeftRotate(Node* root){
    root -> right = leftRotate(root -> right);
    return rightRotate(root);
}


Node* leftRightRotate(Node* root){
    root -> left = rightRotate(root -> left);
    return leftRotate(root);
}


Node* insertAVL(Node * root, int key){
    if (root == NULL){
        return new Node(key);
    }

    if (root -> data < key){
        root -> right = insertAVL(root -> right, key);
    }
    else{
        root -> left = insertAVL(root -> left, key);
    }
    root -> height = 1 + max(getHeight(root -> left), getHeight(root -> right));
    int bf = getBalance(root);

    // LL
    if (bf > 1 && key < root -> left -> data){
        return leftRotate(root);
    }
    
    // RR
    if (bf < -1 && key > root -> right -> data){
        return rightRotate(root);
    }
    
    // LR
    if (bf > 1 && key > root -> left -> data){
        return leftRightRotate(root);
    }
    
    // RL
    if (bf < -1 && key < root -> right -> data){
        return rightLeftRotate(root);
    }
    

    return root;
}


void preOrder(Node* root){
    if (root == NULL){
        return;
    }
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void inOrder(Node* root){
    if (root == NULL){
        return;
    }
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

void postOrder(Node* root){
    if (root == NULL){
        return;
    }
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
}


int main(){
    Node* root = NULL;

    for (int i = 1; i <= 10; i++){
        root = insertAVL(root, i);
    }
    inOrder(root);
    
    return 0;
}