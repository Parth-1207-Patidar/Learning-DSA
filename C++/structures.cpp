#include <iostream>
using namespace std;
int main(){
    struct student
    {
        int std_id;
        char std_name;
        float std_marks;
    };

    student chaman;
    chaman.std_id = 12316831;
    chaman.std_name = 'c';
    chaman.std_marks = 85.5;
    
    cout << chaman.std_id <<endl;

    union alpha{ //can use only one at a time;
        int a;
        int b;
        int c;
    };

    alpha num;
    num.a = 10;
    num.b = 20;

    cout << num.a << endl;

    //a, b, c share same address thus gives the same value as output

    enum meal{
        breakfast, lunch, dinner
    };

    cout << breakfast; // returns index

    return 0;
}