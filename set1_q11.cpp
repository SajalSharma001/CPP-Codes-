//occurrences of a number in an array
#include <iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"enter number of elements: ";
    cin>>n;
    int arry[n];
    for(int i=0; i<n;i++){
        cout<<"enter element "<<i+1<<": ";
        cin>>arry[i];
    }
int count=0,num;
cout<<"enter the number to search:" ;
cin>>num;
for(int i=0;i<n;i++){
    if(arry[i]==num)count++;
}   
cout<<"The number of occurrences of "<<num<<" is: "<<count<<endl;
return 0;
}