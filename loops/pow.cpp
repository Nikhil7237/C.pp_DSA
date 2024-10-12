#include<iostream>
using namespace std;
int main(){
    int n,pow,i,num;
    cout<<"Enter tha number :";
    cin>>n;

    cout<<"Enter tha power :";
    cin>>pow;
    num=n;

    for(i=1;i<pow;i++){
        num=num*n;
    }
    cout<<num; 
  

    
    
}