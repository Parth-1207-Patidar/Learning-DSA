#include <iostream>
using namespace std;
int main(){
    int size, i = 0;

    cout << "Enter the size of array: " << endl;
    cin >> size;

    int arr[size];

    for (i=0; i<size; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    // for (i=0; i<size; i++){
    //     cout << "The value of " << i+1 << " element: " << arr[i] << endl;
    // }

    // int* p = arr;

    // for ( i = 0; i < size; i++)
    // {
    //     cout << "Value of " << i+1 << " element using pointers: " << *(p+i) << endl;
    // }

    i = 0; //i reset

    while (i<size){
        cout << arr[i] << endl;
        i++;
    }
    

    return 0;
}