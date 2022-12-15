//multilevel
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Base Class A Called " << endl;
    }
    ~A()
    {
        cout << "Base Class A destructed " << endl;
    }
};
class A1:public A
{
public:
    A1()
    {
        cout << "Intermediate Class A1 Called " << endl;
    }
    ~A1()
    {
        cout << "Intermediate Class A1 destructed " << endl;
    }
};
class E : public A1
{
public:
    E()
    {
        cout << "Derived Class E Called " << endl;
    }
    ~E()
    {
        cout << "Derived Class E destructed " << endl;
    }
};
int main()
{
    E obe;
    return 0;
}