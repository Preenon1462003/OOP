#include<iostream>
using namespace std;
class A{
int a;
int b;
public :
void getdata(){
    cout<<"Enter the two numbers to add:"<<endl;
    cin>>a>>b;
}
void sum(){
   getdata();
    int sum;
    sum=(a+b);
    cout<<"Sum of these two digits:"<<sum<<endl;

}
A(){
    sum();
    cout<<"A class constructor called"<<endl;
}
~A(){
    cout<<"A class destructed"<<endl;
}
};
class B{
    int c;
    int d;

    public:
    void getdata1(){
        cout<<"Enter another two numbers to add:"<<endl;
        cin>>c>>d;
    }
    void sum1(){
        getdata1();
        int sum=(c+d);
        cout<<"Sum of these two digits:"<<sum<<endl;
    }
    B(){
        sum1();
        cout<<"B class constructor called"<<endl;
    }
    ~B(){
        cout<<"B class desructed"<<endl;
    }
};
class c:public A,public B{
    public:
    c(){
        sum();
        sum1();
        cout<<"C class constructor called"<<endl;
    }
    ~c(){
        cout<<"C class destructed"<<endl;
    }
};

int main(){

    c obj;
    return 0;
}