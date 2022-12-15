#include <iostream>
using namespace std;
class Box
{
    double height;
    double length;
    double vol;

public:
    friend ostream &operator<<(ostream &o, Box &b);
    friend istream &operator>>(istream &i, Box &b);
};

ostream &operator<<(ostream &o, Box &b)
{
    o << "Height of the box is:" << b.height << endl;
    o << "Length of the box is:" << b.length << endl;
    o << "Volume of the box is:" << b.vol;

    return o;
}

istream &operator>>(istream &i, Box &b)
{
    cout << "Enter the value for the height:";
    i >> b.height;
    cout << "Enter the value for the length:";
    i >> b.length;
    cout << "Enter the value of volume:";
    i >> b.vol;

    return i;
}

int main()
{
    Box b;
    cin >> b;
    cout << b;
    return 0;
}