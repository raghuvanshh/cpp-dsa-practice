#include <iostream>
using namespace std;
int main(){
    int unitsConsumed;
    double totalBill = 0.0;
    cout<<"Enter total electricity units consumed: "; cin>>unitsConsumed;
    if(unitsConsumed < 0){
        cout<<"Invalid usage units entered!"<<endl;
    }else if(unitsConsumed <= 100){
        totalBill = unitsConsumed * 4.50;
    }else if(unitsConsumed <= 300){
        totalBill = (100 * 4.50) + ((unitsConsumed - 100) * 6.00);
    }else{
        totalBill = (100 * 4.50) + (200 * 6.00) + ((unitsConsumed - 300) * 8.50);
    }
    if(unitsConsumed >= 0){
        cout<<"Your total electricity bill is: ₹"<<totalBill<<endl;
    }
    return 0;
}
