#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

inline float CI(float time, float amount, float rate){
    rate = 1 + (rate/100);
    amount = pow(rate, time) * amount;

    return amount;
}

int main(){
    float time, amount;
    float rate;

    cout << "Enter time in years: ";
    cin >> time;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Enter rate in %: ";
    cin >> rate;


    cout << setprecision(2) << CI(time, amount, rate);
    return 0;
}