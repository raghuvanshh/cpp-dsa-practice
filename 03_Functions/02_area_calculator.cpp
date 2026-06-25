#include <iostream>
using namespace std;
double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}
double calculateSquareArea(double side) {
    return side * side;
}
double calculateRectangleArea(double length, double width) {
    return length * width;
}
double calculateParallelogramArea(double base, double height) {
    return base * height;
}
int main() {
    double radius, base, height, side, length, width;
    cout << "Enter circle radius: "; cin >> radius;
    cout << "Circle Area: " << calculateCircleArea(radius) << endl;

    cout << "Enter triangle base and height: "; cin >> base >> height;
    cout << "Triangle Area: " << calculateTriangleArea(base, height) << endl;

    cout << "Enter square side: "; cin >> side;
    cout << "Square Area: " << calculateSquareArea(side) << endl;

    cout << "Enter rectangle length and width: "; cin >> length >> width;
    cout << "Rectangle Area: " << calculateRectangleArea(length, width) << endl;

    cout << "Enter parallelogram base and height: "; cin >> base >> height;
    cout << "Parallelogram Area: " << calculateParallelogramArea(base, height) << endl;
    return 0;
}
