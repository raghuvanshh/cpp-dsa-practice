#include <iostream>
using namespace std;
void swapValues(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    int x,y;
    cout<<"Enter the numbers you wish to swap: "; cin>>x>>y;
    cout<<"Before swap: x = "<<x<<", y = "<<y<<endl;
    swapValues(x, y);
    cout<<"After swap: x = "<<x<<", y = "<<y<<endl;
    return 0;
}
