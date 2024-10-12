//week
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout <<"Enter tha number-->";
    cin>>n;

    if(n==1){
        cout<<"Mon";
    }
    else if (n==2){
        cout<<"Tue";
    }
    else if (n==3){
        cout<<"Wed";
    }
    else if (n==4){
        cout<<"Thu";
    }
    else if (n==5){
        cout<<"Fri";
    }
    else if (n==6){
        cout<<"Sat";
    }
    else{
        cout<<"Sun";
    }
}