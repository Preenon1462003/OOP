#include <iostream>
using namespace std;
class data2;
class data1{
    int datA;
   public:
   void info1(int i){
    datA=i;
   }
   void show1(){
    cout<<"Value of first data:"<<datA<<endl;  
   }
   friend void exchange(data1 &x, data2 &y);
};

class data2{
    int data;
    public:
    void info2(int j){
        data=j;
    }
    void show2(){
        cout<<"Value of second data:"<<data<<endl;
    }

    friend void exchange(data1 &x,data2 &y);
}; 

void exchange(data1 &x,data2 &y){
    int data;
    data=x.datA;
    x.datA=y.data;
    y.data=data;
}
int main(){
    data1 d1;
    data2 d2;
    d1.info1(4);
    d2.info2(5);
    cout<<"BEFORE SWAPPING:"<<endl;
    d1.show1();
    d2.show2();
    exchange(d1,d2);
    cout<<"AFTER SWAPPING:"<<endl;
    d1.show1();
    d2.show2();
    
}