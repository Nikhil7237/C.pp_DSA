// fibonacci series

#include<iostream>
using namespace std;
int main(){
     int i,n,curr=0,prv=1,last;

     cout<<"Enter tha number:";
     cin>>n;
     
     cout<<curr<<prv;
     for(i=2;i<n;i++){
        curr=prv+last;
        last=prv;
        prv=curr;
     }
}