#include <iostream>
using namespace std;

int main(){
    int size, i, j, temp;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(i = 0; i < size; i++){
        cin >> arr[i];
    }

    for (i=1; i<size; i++){
        temp = arr[i];
        for (j = i-1; j >= 0; j--){
            if (arr[j] < temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    cout << "The sorted array is: ";
    for (i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}