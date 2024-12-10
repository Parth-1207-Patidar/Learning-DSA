#include <iostream>
using namespace std;

int main(){
    int i, n;

    cout << "Enter a number: ";
    cin >> n;

    for ( i = 0; i < n; i++)
    {
        cout << i+1 << endl;
    }

    while (i<n){
        cout << i+1 << endl;
        i++;
    }

    do{
        cout << i+1 << endl;
        i++;
    } while (i<n);

    return 0;
}