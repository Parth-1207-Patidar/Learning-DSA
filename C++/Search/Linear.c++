#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    int i;
    for (i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inputArray(int arr[], int size){
    int i;
    for (i=0; i<size; i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }
}


int linearSearch(int arr[], int size){
    int key;
    cout << "Enter the target value: ";
    cin >> key;

    for (int i = 0; i<size; i++){
        if (arr[i] == key){
            return i;
            break;
        }
    }
    return -1;
}


int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    inputArray(arr, size);
    printArray(arr, size);

    cout << linearSearch(arr, size);

    return 0;
}