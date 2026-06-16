#include <iostream>
using namespace std;
int main() {
   int age;
   cout<<"Enter your age: "; cin>>age;
   if (age>=18){
    cout<<"Eligible for voting";
   } else if(13<age && age<17){
    cout<<"You are a Teenager";
   }else{
    cout<<"You are a kid";
   }
    return 0;
}