#include <iostream>
using namespace std;
int main() {
    int score = 10;
    int oldScore = score++;
    cout << "Original value captured: " << oldScore << endl;
    cout << "Value after postfix update: " << score << endl;
    int newScore = ++score;
    cout << "Value after prefix update: " << newScore << endl;
    return 0;
}
