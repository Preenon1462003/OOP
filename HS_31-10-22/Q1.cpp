#include <iostream>
using namespace std;
class complex{
    int real;
    int img;

    public :
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }

    friend ostream & operator << (ostream &o, complex &c);
    friend istream & operator >> (istream &i, complex &c); 
};

ostream & operator <<(ostream &o,complex &c){
    o<<c.real;
    o<<"+"<<c.img<<"i"<<endl;
    return o;
}

istream & operator >>(istream &i,complex &c){
    cout<<"Enter the value for the real part:";
    i>>c.real;
    cout<<"Enter the value for the imaginary part:";
    i>>c.img;
    return i;
}

int main(){
    complex c1;
    cin>>c1;
    cout<<"The complex number is :"<<c1<<endl;

    return 0;

}