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
        cout << "Enter element no." << i+1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
}

void reverseArray(int arr[], int size){
    int i, temp, j;
    i = 0;
    j = size - 1;
    
    while (i<size/2){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
        i++;
    }
}

int main() {
    int size;
    
    cout << "Enter the size of an array: ";
    cin >> size;
    
    int arr[size];
    
    inputArray(arr, size);
    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);
    
    return 0;
}


// int main(){
//     int size, i = 0;

//     cout << "Enter the size of array: " << endl;
//     cin >> size;

//     int arr[size];

//     for (i=0; i<size; i++){
//         cout << "Enter element " << i+1 << ": ";
//         cin >> arr[i];
//     }

//     // for (i=0; i<size; i++){
//     //     cout << "The value of " << i+1 << " element: " << arr[i] << endl;
//     // }

//     // int* p = arr;

//     // for ( i = 0; i < size; i++)
//     // {
//     //     cout << "Value of " << i+1 << " element using pointers: " << *(p+i) << endl;
//     // }

//     i = 0; //i reset

//     while (i<size){
//         cout << arr[i] << endl;
//         i++;
//     }
    

//     return 0;
// }

// #include <iostream>

// int main()
