//check prime number
#include <iostream>
using namespace std;
int main(){
    int num , i;
    i=1;
    cout<<"enter a number: ";
    cin>> num;
    
for( int j=2;j<num;j++){
    if (num%j==0){
        i=0 ; 
    }

}
if(i==1)
    cout << num << " is a prime number" << endl;
else
    cout << num << " is not a prime number" << endl;
return 0;
}