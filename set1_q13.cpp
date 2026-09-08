//reverse an array
#include <iostream>
using namespace std;
int main(){ int n;
    
    cout<<"enter number of elements: ";
    cin>>n;
    int arry[n];
    for(int i=0; i<n;i++){
        cout<<"enter element "<<i+1<<": ";
        cin>>arry[i];
    }
    int arry1[n];
    for(int i=0;i<n;i++){
        arry1[i]=arry[i];
    }
    for(int i=0;i<n;i++){
        arry[i]=arry1[n-i-1];
    }
    cout<<"The reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    return 0;
}