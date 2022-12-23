#include <iostream>
using namespace std;
class store{
    int data1;
    static int i;
    static int o;

    public:
    void getdata(){
        cout<<"Enter the data"<<endl;
        cin>>data1;
        i++;
    }
    void show(){
        cout<<"DATA:"<<data1<<endl;
        o++;
    }

    void display(){
        cout<<"Number of times getdata() is called:"<<i<<endl;
        cout<<"Number of times show() is called:"<<o<<endl;
    }
};
 int store:: i=0;
 int store:: o=0;

 int main(){
    store s;
    s.getdata();
    s.show();
    s.getdata();
    s.show();
    s.getdata();
    s.show();
    s.display();

    return 0;
 }