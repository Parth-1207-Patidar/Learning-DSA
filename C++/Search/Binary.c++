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


int binarySearch(int arr[], int size){
    int key, low = 0, high = size - 1;
    cout << "Enter the target value: ";
    cin >> key;

    while (low <= high){

        int mid = (low + high) / 2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            low = mid;
        }
        else{
            high = mid;
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

    cout << binarySearch(arr, size);

    return 0;
}