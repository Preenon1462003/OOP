#include <iostream>
using namespace std;
class complex{
int real;
int img;

public:

complex(){
    real=1;
    img=5;
    cout<<"The complex digit is"<<real<<"+"<<img<<"i"<<endl;

}

complex(int a,int b){
    real=a;
    img=b;
     cout<<"The complex digit is"<<a<<"+"<<b<<"i"<<endl;
}

complex(complex &x){
    real=x.real;
    img=x.img;
    cout<<"The complex digit is"<<real<<"+"<<img<<"i"<<endl;
}
~complex(){
    cout<<"Constructor destroyed"<<endl;
}
};

int  main(){
    complex complex1;
    complex complex2(2,3);
    complex complex3=complex1;

    return 0;
}