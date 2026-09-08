//maximum and second maximum element in an array
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n ;
    int max,second_max;
    cout<<"enter number of elements: ";
    cin>>n;
    int arry[n];
    for( int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<": ";
        cin>>arry[i];
    }
     max= arry[0];
    second_max = INT_MIN;
    
    for(int i=2;i<n;i++){
        if(arry[i]>max){
            second_max=max;
            max=arry[i];
        }
        else if(arry[i]>second_max && arry[i]!=max){
            second_max=arry[i];
        }
    }
    cout<<"The maximum element is: "<<max<<endl;
    cout<<"The second maximum element is: "<<second_max<<endl;
    return 0;
}