#include <iostream>
using namespace std;
int reverseInteger(int original){
    int reversed=0;
    while(original>0){
        int remainder=original%10;
        reversed=(reversed*10)+remainder;
        original/=10;
    }return reversed;
} bool isPalindrome(int check){
    return check == reverseInteger(check);
}
int main(){
    int x;
    cout<<"Enter an integer: "; cin>>x;
    if(isPalindrome(x)){
        cout<<x<<" is a palindrome."<<endl;
    }else{
        cout<<x<<" is not a palindrome."<<endl;
    }
    return 0;
}