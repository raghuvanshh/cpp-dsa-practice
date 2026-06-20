#include <iostream>
using namespace std;
int main(){
    int accountBalance = 5000;
    int withdrawalAmount;
    cout<<"Current Balance: $"<<accountBalance<<endl;
    cout<<"Enter withdrawal amount (multiples of 100): "; cin>>withdrawalAmount;
    if(withdrawalAmount <= 0){
        cout<<"Invalid amount selection!"<<endl;
    }else if(withdrawalAmount % 100 != 0){
        cout<<"Error: Amount must be a multiple of 100!"<<endl;
    }else if(withdrawalAmount > accountBalance){
        cout<<"Error: Insufficient funds available!"<<endl;
    }else{
        accountBalance -= withdrawalAmount;
        cout<<"Transaction successful!"<<endl;
        cout<<"Remaining Balance: "<<accountBalance<<endl;
    }
    return 0;
}
