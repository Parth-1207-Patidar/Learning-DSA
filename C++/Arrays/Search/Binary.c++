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
    int key, low, mid, high;
    low = 0;
    high = size - 1;

    cout << "Enter a target value: ";
    cin >> key;

    while (low <= high){
        mid = low + (high-low) / 2;
        if (arr[mid] == key){
            cout << "Index of target value is: ";
            return mid;
        }
        else if (arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout << "Index of target value is: ";
    return -1;
}

void sortArray(int arr[], int size){
    int i, j, temp;

    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            if (arr[i] < arr[j]){

                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}


int main(){
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    inputArray(arr, size);
    printArray(arr, size);
    sortArray(arr, size);
    cout << endl << "Sorted Array: ";
    printArray(arr, size);
    cout << endl << binarySearch(arr, size) << endl;


    return 0;
}
