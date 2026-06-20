#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you wish to check: "; cin>>n;
     if(n%2==0){
        cout<<n<<" is an even number.";
    }else{
        cout<<n<<" is an odd number.";
    }
    return 0;
}