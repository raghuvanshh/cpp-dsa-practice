#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: "; cin>>a ;
    cout<<"Enter second number: "; cin>>b ;
    cout<<"Enter third number: "; cin>>c ;
    if(a<b && a<c){
        cout<<a<<" is smallest number.";
    }else if(b<a && b<c){
        cout<<b<<" is smallest number.";  
    }else{
        cout<<c<<" is smallest number.";
    }
    return 0;
}


  