// sum of digits of all number
#include <iostream>
using namespace std;

int main(){
    int n , remainder=1;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    while(n != 0){
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    cout << "Sum of digits: " << sum;
    return 0;


}