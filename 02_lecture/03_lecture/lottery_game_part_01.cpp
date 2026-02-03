#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the your lucky number = : ";
    cout<<endl;
    if(n>=300 and n<=460){
        cout<<"The price is MacBook"<<endl;
    }
    else if(n>=200 and n<=280){
        cout<<"The price is Kurkure"<<endl;
    }
    else if(n>=1100 and n<=1500){
        cout<<"The price is Cycle"<<endl;

    }
    else if(n>=50 and n<=80){
        cout<<"The price is Bike"<<endl;
    }
    else{
        cout<<"Better luck next time"
    }

}