#include <iostream>
using namespace std;
double addValues(double num1, double num2) {
    return num1 + num2;
}
double subtractValues(double num1, double num2) {
    return num1 - num2;
}
double multiplyValues(double num1, double num2) {
    return num1 * num2;
}
double divideValues(double num1, double num2) {
    if(num2 == 0.0) {
        cout << "Error: Division by zero is undefined! " << endl;
        return 0.0;
    }
    return num1 / num2;
}
int main() {
    double firstValue, secondValue;
    char operationSign;
    cout << "Enter basic expression (e.g., 8 * 4): ";
    cin >> firstValue >> operationSign >> secondValue;
    if(operationSign == '+') {
        cout << "Result: " << addValues(firstValue, secondValue) << endl;
    }else if(operationSign == '-') {
        cout << "Result: " << subtractValues(firstValue, secondValue) << endl;
    }else if(operationSign == '*') {
        cout << "Result: " << multiplyValues(firstValue, secondValue) << endl;
    }else if(operationSign == '/') {
        cout << "Result: " << divideValues(firstValue, secondValue) << endl;
    }else{
        cout << "Error: Unknown arithmetic operator!" << endl;
    }
    return 0;
}
