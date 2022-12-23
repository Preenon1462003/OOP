#include <iostream>
using namespace std;
class shape
{
public:
     virtual void perimeter()=0;
};
class circle : public shape
{
    float r;

public:
   void perimeter()
    {
        cout << "ENTER THE RADIUS:"
             << " ";
        cin >> r;
        cout << "\nPERIMETER OF CIRCLE IS :" << (2 * 3.146 * r) << endl;
    }
};
class square : public shape
{
    int l, b;

public:
     void perimeter()
    {
        cout << "\nENTER THE SIDE:"
             << " ";
        cin >> l;

        cout << "\nTHE PERIMETER OF RECTANGLE IS :" << 4 * l << endl;
    }
};
class triangle : public shape
{
    int h1, h2, b;
    float a;

public:
    void perimeter()
    {
        cout << "\nENTER THE LENGTH: ";
             
        cin >> h1;
        cout << "\nENTER THE LENGTH: ";
             
        cin >> h2;
        cout << "\nENTER THE BASE: ";
        cin >> b;
        a = h1 + h2 + b;
        cout << "\nPERIMETER OF TRIANGLE IS:" << a << endl;
    }
};
int main()
{
    shape *s;
    cout << "For circle: " << endl;
    circle c;
    s = &c;
    s->perimeter();
    cout << "For  square: " << endl;
    square r;
    s = &r;
    s->perimeter();
    cout << "For triangle: " << endl;
    triangle t;
    s = &t;
    s->perimeter();

    return 0;
}