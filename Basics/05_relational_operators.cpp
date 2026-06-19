#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 20;
    cout << boolalpha;
    cout << a << " == " << b << " is " << (a == b) << "\n"; 
    cout << a << " != " << b << " is " << (a != b) << "\n"; 
    cout << a << " > "  << b << " is " << (a > b)  << "\n"; 
    cout << a << " < "  << b << " is " << (a < b)  << "\n";
    cout << a << " >= " << b << " is " << (a >= b) << "\n"; 
    cout << a << " <= " << b << " is " << (a <= b) << "\n"; 
    return 0;
}
