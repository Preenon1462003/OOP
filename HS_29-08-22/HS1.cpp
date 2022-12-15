#include <iostream>
using namespace std;
class Class2;
class Class1{
    int digit1;
    public:
    void data(int i){
         digit1 = i;
    }
    
    void show(){
        cout<<"Value of i is:"<<digit1<<endl;
    }
    friend void exchange(Class1 &x,Class2 &y);
};

class Class2{
    int digit2;
    public:
    void data(int j){
        digit2 = j;
    }

    void show(){
        cout<<"Value of j is:"<<digit2<<endl;
    }

    friend void exchange(Class1 &x,Class2 &y);
};
void exchange(Class1 &x,Class2 &y){
    int temp =x.digit1;
    x.digit1 =y.digit2;
    y.digit2 = temp;
}

int main(){
    Class1 c1;
    Class2 c2;
    c1.data(10);
    c2.data(20);
    cout<<"Before swapping the values of i and j are:"<<endl;
    cout<<"i:"<<endl;
    c1.show();
    cout<<"j:"<<endl;
    c2.show();
    exchange(c1,c2);
    cout<<"After swapping the values of i and j are:"<<endl;
    cout<<"i:"<<endl;
    c1.show();
    cout<<"j:"<<endl;
    c2.show();

    return 0;
    
}