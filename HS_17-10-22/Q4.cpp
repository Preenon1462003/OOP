#include<iostream>
using namespace std;

class base{
    int a;
    public:
    base(){
        cout<<"Class base called"<<endl;
    }
    ~base(){
        cout<<"Class base destructed"<<endl;
    }
};
class Derived1:virtual public base{
    int b;
    public:
    Derived1(){
        cout<<"Derived1 class called"<<endl;
    }
    ~Derived1(){
        cout<<"Derived1 class destructed"<<endl;
    }
};
class Derived2:virtual public base{
    int c;
    public:
    Derived2(){
        cout<<"Derived2 class called"<<endl;
    }
    ~Derived2(){
        cout<<"Derived2 class destructed"<<endl;
    }
};
class Derived3:public Derived1, public Derived2{
 public:
  
  Derived3(){
    cout<<"Derived3 class called"<<endl;
  }

  ~Derived3(){
    cout<<"Derived3 class destructed"<<endl;
  }

};
int main(){
 Derived3 obj;
 return 0;
}