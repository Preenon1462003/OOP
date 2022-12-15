#include <iostream>
using namespace std;
class add2;
class add1{
  int a;
  public:
  void set_data(){
    cout<<"Enter the value of A:"<<endl;
    cin>>a;
  }
  friend void add(add1 &x,add2 &y);
};
class add2{
    int b;
    public:
    void set_data(){
        cout<<"Enter the value of B:"<<endl;
        cin>>b;
    }
    friend void add(add1 &x,add2 &y);
};

void add(add1 &x,add2 &y){
   cout<<"Value after addition:"<<x.a+y.b;
}

int main(){
    add1 A;
    add2 B;
    A.set_data();
    B.set_data();
    add(A,B);
    return 0;
}