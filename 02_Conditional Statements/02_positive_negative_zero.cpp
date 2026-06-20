#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you wish to check: "; cin>>n;
     if(n>0){
        cout<<n<<" is a positive number.";
    }else if(n==0){
        cout<<n<<" is zero.";
    }else{
        cout<<n<<" is a negative number.";
    }
    return 0;
}