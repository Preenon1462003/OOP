//multiple
#include <iostream>
using namespace std;
class Base1{
    public:
    Base1(){
     cout<<"Class Base1 called"<<endl;
    }
    ~Base1(){
     cout<<"Class Base1 destructed"<<endl;
    }
};

class Base2{
      public:
    Base2(){
     cout<<"Class Base2 called"<<endl;
    }
    ~Base2(){
     cout<<"Class Base2 destructed"<<endl;
    }
};

class Derived: public Base1,public Base2{
  public:

  Derived(){
    cout<<"Class Derived called"<<endl;
  }

  ~Derived(){
    cout<<"Class Derived destructed"<<endl;
  }
};

int main(){
    Derived object;
    return 0;
}