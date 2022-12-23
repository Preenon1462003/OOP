#include <iostream>
using namespace std;
class A{
    int a ;
    int b;
public:
    void getdata(){
        cout<<"Enter the first data:"<<endl;
        cin>>a;
        cout<<"Enter the second data:"<<endl;
        cin>>b;
    }
    void show(){
        cout<<"DATA1:"<<a<<endl;
        cout<<"DATA2:"<<b<<endl;
    }
    friend void operator-(A &x);
};

void operator-(A &x){
    x.a=-x.a;
    x.b=-x.b;
}

int main(){
    A a1;
    a1.getdata();
    a1.show();
    -a1;
    a1.show();
    return 0;
}