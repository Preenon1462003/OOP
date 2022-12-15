#include <iostream>
using namespace std;
class Parent
{
    int x;

public:
    Parent(int i)
    {
        x = i;
        cout << "Parent class's parameterized constructor "<< endl;
    }
};

class Child : public Parent
{

public:
    Child(int x) : Parent(x)

    {

        cout << " Child class's parameterized constructor "<< endl;
    }
};

int main()
{

    Child obj1(5);

    return 0;
}