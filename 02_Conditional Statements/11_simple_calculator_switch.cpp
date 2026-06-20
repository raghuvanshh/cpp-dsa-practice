#include <iostream>
using namespace std;
int main(){
    double num1, num2;
    char op;
    cout<<"Enter first number, operator, second number: "; cin>>num1>>op>>num2;
    switch(op){
        case '+': cout<<"Result: "<<(num1+num2)<<endl; break;
        case '-': cout<<"Result: "<<(num1-num2)<<endl; break;
        case '*': cout<<"Result: "<<(num1*num2)<<endl; break;
        case '/': cout<<"Result: "<<(num1/num2)<<endl; break;
        default:cout<<"Invalid operator!"<<endl;break;
    }
    return 0;
}
