// #include <iostream>
// using namespace std;

// int main(){
//     int num, i, j;

//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 1; i <= num; i++){
//         for (j = 1; j <= num; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int num, i, j;

//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 1; i <= num; i++){
//         for (j = num; j >= 1; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int num, i, j, count = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 1; i <= num; i++){
//         for (j = 1; j <= num; j++){
//             cout << j+count << " ";
//         }
//         count += 5;
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int row, column, i, j, count = 1;
//     cout << "Enter number of row: ";
//     cin >> row;
//     cout << "Enter number of column: ";
//     cin >> column;

//     for (i = 0; i < row; i++){
//         for (j = 0; j < column; j++){
//             cout << count++ << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int num, i, j;

//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 0; i < num; i++){
//         for (j = 0; j < i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int i, j, num, count = 1;

//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 0; i < num; i++){
//         for (j = 0; j <= i; j++){
//             cout << count++ << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int num, i, j;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 0; i < num; i++){
//         for (j = 1; j <= num; j++){
//             cout << j + i*num  << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int num, i, j;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 0; i < num; i++){
//         for (j = 0; j < i+1; j++){
//             cout << j+1+i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int num, i, j;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 0; i < num; i++){
//         for (j = 0; j < i+1; j++){
//             cout << char(65 + j+i) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int i, j, num;

//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 0; i<num; i++){
//         for (j = num; j > i; j--){
//             cout << "  ";
//         }
//         for (j=0; j<i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int i, j, num;

//     cout << "Enter a number: ";
//     cin >> num;

//     for (i = 0; i<num; i++){
//         // for (j = num; j > i; j--){
//         //     cout << "  ";
//         // }
//         for (j=num; j>i; j--){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int i, j, num;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 0; i<num; i++){
        for (j = num - i; j < num; j++){
            cout << "  ";
        }
        for (j=num; j>i; j--){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}