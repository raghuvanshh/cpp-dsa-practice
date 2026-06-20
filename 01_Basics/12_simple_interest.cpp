#include <iostream>
using namespace std;
int main(){
    double principal, rate, time;
    cout << "Enter principal, rate, and time: "; cin >> principal >> rate >> time;
    double simpleInterest = (principal * rate * time) / 100.0;
    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Total Amount: " << (principal + simpleInterest) << endl;
    return 0;
}
