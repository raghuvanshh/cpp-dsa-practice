#include <iostream>
using namespace std;
int main(){
    double c, f;
    cout << "Enter temperature in Celsius: "; cin >> c;
    cout << "Fahrenheit: " << ((c * 9.0 / 5.0) + 32.0) << endl;

    cout << "Enter temperature in Fahrenheit: "; cin >> f;
    cout << "Celsius: " << ((f - 32.0) * 5.0 / 9.0) << endl;
    return 0;
}
