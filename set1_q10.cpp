//linear search in array
#include <iostream>
using namespace std;
int main(){int x;
    cout<<"Enter the size of the array: ";
    cin>>x;
    int arry[x];

    for(int i=0; i<x; i++){
        cout<<"Enter the value of element "<<i+1<<": ";
        cin>>arry[i];
    }

    cout<<"enter the number to search: ";
    int num;
    cin>>num;

    for(int i=0; i<x; i++){
        if(arry[i]==num){
            cout<<"The number is found at index "<<i<<endl;
            break;
        }
    }
return 0;
}