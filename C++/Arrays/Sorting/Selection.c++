#include <iostream>
using namespace std;
int main(){
    int size;
    cin >> size;

    int arr[size];

    for (int i=0; i<size; i++){
        cin >> arr[i];
    }

    for (int i=0; i<size; i++){
        int min = i;
        for (int j=i+1; j<size; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if (i != min){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}