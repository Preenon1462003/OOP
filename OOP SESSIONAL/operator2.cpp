#include <iostream>
using namespace std;
class Unary{
int a;

public:
void getdata(){
    cout<<"Enter the data:"<<endl;
    cin>>a;
}
void show(){
    cout<<"DATA:"<<a<<endl;
}

void operator-(){
    a=-a;
}
};

int main(){
    Unary u1,u2;
    u1.getdata();
    u1.show();
    -u1;
    u1.show();
}