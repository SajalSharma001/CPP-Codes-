#include <iostream>
using namespace std ;
int main(){
    int number , reversed_number = 0 , remainder;
    cout<<"enter the number";
    cin>>number ;
    int original_number = number ;
        remainder= number%10;
        reversed_number = reversed_number*10 + remainder ;
        number/=10 ;
    };
    if(reversed_number == original_number)
    cout<<"it is a pallindrome number" ;
    else cout<<"it is not a pallindrome number";

return 0 ;
}