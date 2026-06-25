#include <iostream>
using namespace std;
bool isPrime(int a) {
    if (a <= 1) {
        return false;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    }else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
