#include<iostream>
#include<iomanip>
using namespace std;

int d = 4; //currently a global var, can be overwritten by a variable of same name within a function, but the overwritten value will remain local to that function, in short localification

int main(){
    int a, b, c;
    a = 12;
    b = 7;

    cout<<"Hello World!!"<<endl;

    cout<<"arithmetic operators"<<endl;
    cout<<"a + b = "<< a+b <<endl;
    cout<<"a - b = "<< a-b <<endl;
    cout<<"a * b = "<< a*b <<endl;
    cout<<"a / b = "<< a/b <<endl;
    cout<<"a % b = "<< a%b <<endl;
    cout<<"pre-inc: "<< ++a <<endl; // 12 + 1 >> 13
    cout<<"post-inc: "<< a++ <<endl; // 13 >> 13 + 1
    cout<<"pre-dec: "<< --a <<endl; // 14 - 1 >> 13
    cout<<"post-dec: "<< a-- <<endl; // 13 >> 13 - 1

    cout<<"assignment operators"<<endl;

    c = 3; // (=) here is known as assignment operator, assigning a value to a variable.

    c += 3; // c = c + 3;
    cout<<"c += 3: "<< c <<endl;

    c -= 3; // c = c - 3;
    cout<<"c -= 3: "<< c <<endl;

    c *= 3; // c = c * 3;
    cout<<"c *= 3: "<< c <<endl;
    
    c /= 3; // c = c / 3;
    cout<<"c /= 3: "<< c <<endl;

    c %= 3; // c = c % 3;
    cout<<"c %= 3: "<< c <<endl;

    cout<<"Comparison ops"<<endl;

    cout<< (a == b) <<endl; // samjhane nhi betha itna sab, same cheez loop pe chal rhi bc
    cout<< (a != b) <<endl;
    cout<< (a < b) <<endl;
    cout<< (a > b) <<endl;
    cout<< (a <= b) <<endl;
    cout<< (a >= b) <<endl;

    cout<<"Logical ops"<<endl;

    cout<<"AND Gate: "<< (a&&b) <<endl;

    cout<<"OR Gate: "<< (a||b) <<endl;

    cout<<"NOT Gate: "<< !a <<endl;

    cout<<"Scope of a variable"<<endl;

    cout<<"Global: "<< d <<endl; //prints value of global var d

    int d = 10;//updates global var d as a var local to the current function
    
    cout << "Global, despite localifying: " << ::d << endl;

    cout<<"Local: "<< d <<endl; //prints updated var

    cout<<"Global, despite localifying: "<<::d<<endl;

    cout<<"Typecasting"<<endl;

    cout<<34.4f<<endl; //specifies the value as float

    cout<<34.4l<<endl; //specifies as long double;

    cout<<int(22.547)<<endl;

    cout<<"Constant"<<endl;
    const float pi = 3.14;

    cout<<"manipulators(text-format)"<<endl;

    cout<<setw(4)<<4<<endl; //sets a width of 4
    cout<<setw(4)<<44<<endl; //sets a width of 4
    cout<<setw(4)<<444<<endl; //sets a width of 4

    cout<<4<<endl;
    cout<<44<<endl;
    cout<<444<<endl;

    

    return 0;
}