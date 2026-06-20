#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter first number: "; cin >> a;
    cout << "Enter second number: "; cin >> b;
    cout << "Enter third number: "; cin >> c;
    if(a >= b && a >= c){
        cout << a << " is largest number." << endl;
    }else if(b >= a && b >= c) {
        cout << b << " is largest number." << endl;
    }else{
        cout << c << " is largest number." << endl;
    }
    return 0;
}
