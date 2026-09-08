//factorial of number using recursion
#include <iostream>
using namespace std;
int fact(int n){
    if(n==1)return 1 ;
    else return n*fact(n-1);
}
int main(){
    int number ;
    cout<<"enter the number";
    cin>> number;
    cout<<"factorial of "<< number << " is " << fact(number) << endl;
    return 0;
}