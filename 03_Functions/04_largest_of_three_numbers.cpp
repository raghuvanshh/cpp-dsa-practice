#include <iostream>
using namespace std;
int findLargest(int n1, int n2, int n3) {
    if (n1 >= n2 && n1 >= n3) {
        return n1;
    }else if (n2 >= n1 && n2 >= n3) {
        return n2;
    }else {
        return n3;
    }
}
int main() {
    int a, b, c;
    cout << "Enter three numbers: "; cin >> a >> b >> c;
    cout << "The largest number is: " << findLargest(a, b, c) << endl;
    return 0;
}
