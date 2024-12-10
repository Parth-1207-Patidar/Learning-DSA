#include <iostream>
using namespace std;
/**
 * brief The main function.
 * return 0 on successful execution.
 */
int main(){
    // int a = 10;
    // int *ptr = nullptr;

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *p = &arr[0];

    cout << "Value of p: " << p[3] << endl;
    // ptr = &a;

    // // Print the address of variable 'a'
    // cout << "Address of a: " << &a << endl;

    // // Print the value of variable 'a'
    // cout << "Value of a: " << a << endl; 

    // // Print the address of pointer 'ptr'
    // cout << "Address of ptr: " << &ptr << endl;

    // // Print the value of pointer 'ptr'
    // cout << "Value of ptr: " << ptr << endl;

    // // Print the value pointed by pointer 'ptr'
    // cout << "Value of *ptr: " << *ptr << endl;

    // // Print the address of array 'arr'
    // cout << "Address of arr: " << &arr << endl;

    // // Print the address of the first element of array 'arr'
    // cout << "Address of arr[0]: " << &arr[0] << endl;

    // // Print the value of array 'arr'WQ2
    // cout << "Value of arr: " << arr << endl;

    cout << "Address of first element of array 'arr': " << &arr[0] << endl;

    // // Print the value of the first element of array 'arr'
    // cout << "Value of *arr: " << *arr << endl;

    // // Print the value of the second element of array 'arr'
    // cout << "Value of *(arr+1): " << *(arr+1) << endl;

    // // Print the value of the third element of array 'arr'
    // cout << "Value of *(arr+2): " << *(arr+2) << endl;

    // //arr[i] is basically *(arr + i)
    // cout << "To prove the above statement: " << 1[arr] << endl;

    return 0;
}