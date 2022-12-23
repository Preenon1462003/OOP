#include <iostream>
using namespace std;
class complex{
    int i;
    public:
    void get(){
        cin>>i;
    }
    complex(){}
        complex(int a){
        a=i;
    }
    complex operator --(int){
        complex temp;
        temp.i=i--;
        return temp;
    }
    void disp(){
        cout<<"DATA:"<<i;
    }
};

int main(){
    complex c1,c2;
    c1.get();
    c2=c1--;
    c1.disp();
}