#include <iostream>
using namespace std;
int main(){
    
    int size, num, index ,i;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size + 1];

    cout << "Enter the elements of the array: ";
    for(i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the index to be inserted at: ";
    cin >> index;

    cout << "Enter the number to be inserted: ";
    cin >> num;

    for (i = size; i > index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = num;

    for (i=0; i<=size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}