#include <iostream>
using namespace std;

int main(){
    int number , reversed_number = 0 , remainder;
    cout<<"enter the number";
    cin>>number ;
    while(number!=0){
        remainder= number%10;
        reversed_number = reversed_number*10 + remainder ;
        number/=10 ;
    }
    cout<<"reversed number ="<<reversed_number<<endl ;

return 0 ;
}