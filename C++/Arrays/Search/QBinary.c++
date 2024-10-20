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

int binarySearch(int arr[], int size, int key){
    int low, high, mid;
    low = 0;
    high = size - 1;

    while (low<=high){
        mid = low/2 + high/2;

        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
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

int pivotElement(int arr[], int size){
    int low, high, mid;
    low = 0;
    high = size - 1;

    while (low < high)
    {
        mid = low/2 + high/2;
        if (arr[mid] >= arr[0]){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    return low;
}

int searchRotated(int arr[], int size, int key){
    int pivot = pivotElement(arr, size);
    int low, high, mid;
    low = 0;
    high = size - 1;

    if (arr[pivot] < key && key < arr[high]){
        low = pivot;
    }

    else if (arr[pivot] == key){
        return pivot;
    }

    else if (arr[high] == key){
        return high;
    }

    else{
        high = pivot - 1;
    }

    while (low <= high)
    {
        mid = low/2 + high/2;

        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}


long long int squareRoot(int number){
    long long int low = 0, high = number/2;
    long long int mid, square, squareplus1;

    while (low <= high){
        if (number == 1){
            return 1;
        }
        
        mid = low + (high - low) / 2;
        square = mid * mid;
        squareplus1 = (mid+1)*(mid+1);
        
        if (square <= number && squareplus1 > number){
            return mid;
        }
        else if (square > number){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    return -1;
}

double squareRootDecimal(int number, double precision){
    double ans = squareRoot(number);
    double newans, factor = 1;

    for (int j = 0; j < precision; j++){
        factor = factor / 10;
        for (double i = ans; i*i <= number; i += factor){
            newans = i;
        }
    }

    // for (double i = 0.000; i <= 0.999; i += 0.001){
    //     if ((ans+i)*(ans+i) <= number){
    //         newans = ans + i;
    //     }
    //     else{
    //         break;
    //     }
    // }
    return newans;
}


int main(){
    int size, key;
    // cout << "Enter size of array: ";
    // cin >> size;

    // int arr[size];

    // inputArray(arr, size);
    // printArray(arr, size);

    // sortArray(arr, size);
    // cout << "Sorted Array: ";
    // printArray(arr, size);

    cout << "Enter key to search: ";
    cin >> key;

    // cout << "First Occurrence of " << key << " is at index: " << firstOccurrence(arr, size, key) << endl;
    // cout << "Last Occurrence of " << key << " is at index: " << lastOccurrence(arr, size, key) << endl;

    // cout << "Peak Element: " << peakElement(arr, size) << endl;
    // cout << "Pivot Element: " << pivotElement(arr, size) << endl;

    // cout << "Search in Rotated array: " << searchRotated(arr, size, key) << endl;

    cout << "Square root of the number: " << squareRootDecimal(key, 3) << endl;

    return 0;
}