#include<iostream>
using namespace std;
void greet(){
    cout<<"hello"<<endl;
}
//arument
void great (string name){
    cout<<"hello"<<name<<endl;

}
// no arg and return
int subtract(){
    int a=5;
    int b=6;
    int c=a+b;
    return c;
}
//arg and return
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    greet();
    great("rishabh")
}

