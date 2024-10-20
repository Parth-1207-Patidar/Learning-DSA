#include <iostream>
using namespace std;
int main(){
    int n;
    n = 10;
    int* b = &n;

    //Pointer to pointer

    int** c = &b;

    // int*** d = &c;............

    cout << "Value of n: " << n << endl;
    cout << "address of n: " << &n << endl;
    cout << "b: " << b << endl;
    cout << "Value of b: " << *b << endl;
    cout << "address of b: " << &b << endl;
    cout << "c: " << c << endl;
    cout << "Value of c: " << *c << endl;

    cout << "value of n from c: " << **c << endl;


    //(&) is address var, stored in RAM
    //(*) is dereference var

    //pointer arithmetic
    //addr of new pointer = addr of current pointer + i * sizeof(pointer) //(size ofcurrent data type)
    //p+i = p + i*sizeof(p)
    return 0;
}