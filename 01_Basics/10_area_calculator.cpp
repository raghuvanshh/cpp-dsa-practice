#include <iostream>
using namespace std;
int main() {
    double radius, base, height, side, length, width;

    cout << "Enter circle radius: "; cin >> radius;
    cout << "Circle Area: " << (3.14159 * radius * radius) << endl;

    cout << "Enter triangle base and height: "; cin >> base >> height;
    cout << "Triangle Area: " << (0.5 * base * height) << endl;

    cout << "Enter square side: "; cin >> side;
    cout << "Square Area: " << (side * side) << endl;

    cout << "Enter rectangle length and width: "; cin >> length >> width;
    cout << "Rectangle Area: " << (length * width) << endl;

    cout << "Enter parallelogram base and height: "; cin >> base >> height;
    cout << "Parallelogram Area: " << (base * height) << endl;
    return 0;
}
