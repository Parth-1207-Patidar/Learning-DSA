#include <iostream>
using namespace std;

struct stack{
    int size;
    int top = -1;
    int *arr;

    bool isEmpty(){
        if (top == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(top == size-1){
            return true;
        }
        return false;
    }

    void push(int item){
        if(isFull()){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = item;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << arr[top] << endl;
        top--;
    }

    void stackTop(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return;
        }
        cout << arr[top] << endl;
    }

    void peek(){
        int index;
        cout << "Enter the index: ";
        cin >> index;
        if(index > top){
            cout << "Invalid index" << endl;
            return;
        }
        cout << arr[index] << endl;
    }

};

int main(){

    stack s;
    s.size = 10;
    s.arr = new int[s.size];
    
    for (int i=5; i>0; i--){
        s.push(i);
    }

    for (int i=0; i<5; i++){
        s.pop();
    }
    
    return 0;
}