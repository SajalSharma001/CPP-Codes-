//max element in array 
#include <iostream>
using namespace std;
int main(){
    int arry[50];
    int x,y;
    cout<<"enter the number of elements of an arry";
    cin>>x ;
for(int i=0;i<x;i++){
    int z ;
    cout<<"enter arry["<<i<<"]"<<endl ;
    cin>>z ;
    arry[i]=z;

}    
int max_number = arry[0];
for( int y=0;y<x;y++){
    if(arry[y]>max_number){
        max_number= arry[y];
    }
}
cout<<"the largest number in arry is "<<max_number<<endl;
return 0;
}