#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Class A called"<<endl;
    }
    ~A(){
        cout<<"Class A destroyed"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"Class B called"<<endl;
    }
    ~B(){
        cout<<"Class B destroyed"<<endl;
    }
};
class C: public B{
    public:
    C(){
      cout<<"Class C called"<<endl;
    }
    ~C(){
        cout<<"Class C destroyed"<<endl;
    }
};

int main(){
    C obj;
    return 0;
}