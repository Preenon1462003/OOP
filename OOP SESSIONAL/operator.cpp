#include <iostream>
using namespace std;
class A
{
    int a;



public:
    void getdata()
    {
        cout << "Enter the 1st data" << endl;
        cin >> a;

    }
    void show()
    {
        cout << "DATA 1:" << a << endl;

    }
    A operator+(A &x)
    {
        A y;
        y.a = a + x.a;
    }
};

int main()
{
    A a1, a2, a3,a4;
    a1.getdata();
    a2.getdata();
    a3 = a1 + a2;
    a3.show();
    


    return 0;
}