#include <iostream>
#include <math.h>
using namespace std;
class shape{
    protected:
    int length;
    int radius;
    int height;
    int base;

};
class square:public shape{
    public:
    void getdata(){
        cout<<"Enter the length of the slide:"<<endl;
        cin>>length;
    }
    void area(){
        cout<<"AREA OF SQUARE:"<<pow(length,2)<<endl;
    }

};

class circle:public shape{
    public:
     void getdata(){
        cout<<"Enter the radius of the circle:"<<endl;
        cin>>radius;
     }
    void area(){
        cout<<"AREA OF SPHERE:"<<(3.14*pow(radius,2))<<endl;
    }
};

class triangle:public shape{
    public:
    void getdata(){
        cout<<"Enter the height of triangle:"<<endl;
        cin>>height;
        cout<<"Enter the base of the triangle:"<<endl;
        cin>>base;
    }
    void area(){
        cout<<"AREA OF TRIANGLE:"<<(0.5*base*height)<<endl;
    }
};
int main(){
    square s;
    circle c;
    triangle t;
    s.getdata();
    s.area();
    t.getdata();
    t.area();
    c.getdata();
    c.area();
    return 0;
}