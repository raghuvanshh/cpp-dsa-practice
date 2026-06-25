#include <iostream>
using namespace std;
bool isEven(int checkNumber) {
    return checkNumber % 2 == 0; //returns true or false
}

int main() {
    int num;
    cout << "Enter an integer: "; cin >> num;
    if (isEven(num)) {
        cout << num << " is even" << endl;
    }else{
        cout << num << " is odd" << endl;
    }
    return 0;
}
