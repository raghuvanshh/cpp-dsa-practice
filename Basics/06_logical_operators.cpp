#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int y = 20;
    bool isBothTrue = (x < 15) && (y > 15);
    bool isEitherTrue = (x == 5) || (y == 20);
    bool isNotTrue = !(x == 10);
    cout << boolalpha;
    cout << isBothTrue << "\n";
    cout << isEitherTrue << "\n";
    cout << isNotTrue << "\n";
    return 0;
}
