#include <iostream>
using namespace std;
unsigned long long calculateFactorial(int num){
    if (num < 0){
        return 0;
    }
    unsigned long long factorialResult = 1;
    for(int i = 1; i <= num; i++){
        factorialResult *= i;
    }
    return factorialResult;
}
int main() {
    int inputNumber;
    cout << "Enter a positive integer: "; cin >> inputNumber;
    unsigned long long result = calculateFactorial(inputNumber);
    if (result == 0) {
        cout << "Factorial of negative numbers is undefined." << endl;
    }else {
        cout << "Factorial of " << inputNumber << " is: " << result << endl;
    }
    return 0;
}
