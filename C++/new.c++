#include <iostream>
using namespace std;
int main(){
    int i, j, k, row;

    cout << "Enter number of rows: ";
    cin >> row;

    for (i=row; i>0; i--){
        for (k = 0; k <= row - i; k++){
            cout << " ";
        }
        for(j=0; j<i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}