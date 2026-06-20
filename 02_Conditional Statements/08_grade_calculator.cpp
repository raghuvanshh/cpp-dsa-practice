#include <iostream>
using namespace std;
int main() {
   int marks;
   cout<<"Enter marks: "; cin>>marks;
   if (marks<25){
    cout<<"F";
   } else if(25<=marks && marks<=44){
    cout<<"E";
   }else if(45<=marks && 49>=marks){
    cout<<"D";
   }else if(50<=marks && 59>=marks){
    cout<<"C";
   }else if(60<=marks && 79>=marks){
    cout<<"B";
   }else if(80<=marks && 100>=marks){
    cout<<"A";
   }else{
    cout<<"Enter marks in range 0 to 100 only !!";
   }
    return 0;
}