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

void sortArray(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Ques 1.

int firstOccurrence(int arr[], int size, int key){
    int low, high, mid, ans;

    low = 0;
    high = size - 1;
    ans = -1;

    while (low <= high){
        mid = low/2 + high/2;
        if (arr[mid] == key){
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(int arr[], int size, int key){
    int low, high, mid, ans;

    low = 0;
    high = size - 1;
    ans = -1;

    while (low <= high){
        mid = low/2 + high/2;
        if (arr[mid] == key){
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}

int peakElement(int arr[], int size){
    int low, high, mid;
    low = 0;
    high = size - 1;

    while (low < high){
        mid = low/2 + high/2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
            return arr[mid];
        }

        else if (arr[mid] < arr[mid + 1]){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return arr[low];
}



int main(){
    int size, key;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    inputArray(arr, size);
    printArray(arr, size);

    // sortArray(arr, size);
    // cout << "Sorted Array: ";
    // printArray(arr, size);

    // cout << "Enter key to search: ";
    // cin >> key;

    // cout << "First Occurrence of " << key << " is at index: " << firstOccurrence(arr, size, key) << endl;
    // cout << "Last Occurrence of " << key << " is at index: " << lastOccurrence(arr, size, key) << endl;

    cout << "Peak Element: " << peakElement(arr, size) << endl;

    return 0;
}