#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    int temp = a;
    a = b;
    b = temp;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    return 0;
}
