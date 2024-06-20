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

#include <iostream>
using namespace std;

int main(){
    int num, i, j, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (i = 1; i <= num; i++){
        for (j = 1; j <= num; j++){
            cout << j+count << " ";
        }
        count += 5;
        cout << endl;
    }
    return 0;
}