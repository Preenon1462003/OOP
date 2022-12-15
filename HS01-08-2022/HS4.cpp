#include <iostream>
using namespace std;
class complex{
    public:
    int real[10],img[10];
};
int main(){
    complex c;
    for(int i =0;i<10;i++){
        cout<<"Enter the real and imaginary part of the complex number"<<endl;
        cin>>c.real[i]>>c.img[i];
    }
    cout<<"The complex numbers are:"<<endl;
    for(int i =0;i<10;i++){
        cout<<c.real[i]<<"+"<<c.img[i]<<"i"<<endl;
    }
    return 0;
}