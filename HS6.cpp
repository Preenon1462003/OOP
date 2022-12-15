#include <iostream>
using namespace std;
class complex{
 int real;
 int imaginary;
 public:
 complex(){
    real = 1;
    imaginary=5;
    cout<<"The complex number is :"<<real<<"+"<<imaginary<<"i"<<endl;
    
 }

 complex(int r,int i){
    real=r;
    imaginary =i;
    cout<<"The complex number is :"<<real<<"+"<<imaginary<<"i"<<endl;
 }

 complex(complex &data){
    real = data.real;
    imaginary=data.imaginary;
    cout<<"The complex number is :"<<real<<"+"<<imaginary<<"i"<<endl;

 }

 ~complex(){
    cout<<"DESTRUCTOR BEING INVOKED"<<endl;
 }

};

int main(){
    complex complex1(2,5);
    complex complex3;
    complex complex2=complex1;
    return 0;
}