#include <iostream>
using namespace std;
int reverseInteger(int original){
    int reversed=0;
    while(original>0){
        int remainder=original%10;
        reversed=(reversed*10)+remainder;
        original/=10;
    }return reversed;
}
int main(){
    int inputNum;
    cout<<"Enter an integer: "; cin>>inputNum;
    cout<<"Reversed number: "<<reverseInteger(inputNum)<<endl;
    return 0;
}
