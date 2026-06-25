#include <iostream>
using namespace std;
long long calculatePower(int base, int exp){
    long long result = 1;
    for(int i=1; i<=exp; i++){
        result *= base;
    }return result;
}
int main(){
    int base, exp;
    cout<<"Enter base and exponent: "; cin>>base>>exp;
    if(exp<0){
        cout<<"This program only supports non-negative exponents."<<endl;
    }else{
        cout<<base<<" raised to the power of "<<exp<<" is: "<<calculatePower(base, exp)<<endl;
    }
    return 0;
}
