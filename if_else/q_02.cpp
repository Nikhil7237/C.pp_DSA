/*Ticket Price Calculator: Create a program that asks
 the user for their age and checks if they qualify
  for a discounted ticket price (e.g., under 12 and
   over 65 get discounts), If they are eligible print “YES”
    else “NO”.*/
    
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter tha number -->>";
    cin>>n;
    if(n<12){
        cout<<"yes";
    }
    else if(n>65){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}