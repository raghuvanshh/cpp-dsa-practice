#include <iostream>
using namespace std;
void printFibonacci(int totalTerms) {
    if (totalTerms<=0) {
        cout << "Please enter a number greater than 0." << endl;
        return;
    }
    int a=0;
    int b=1;
    if (totalTerms>=1){
        cout<<a<<" ";
    }
    if (totalTerms>=2){
        cout<<b<< " ";
    }
    for (int i=3; i<=totalTerms; i++){
        int nextTerm= a+b;
        cout<<nextTerm<<" ";
        a=b;
        b=nextTerm;
    }cout<<endl;
}
int main(){
    int terms;
    cout<<"Enter the number of terms: "; cin>>terms;
    printFibonacci(terms);
    return 0;
}
