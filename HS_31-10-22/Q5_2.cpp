#include <iostream>
using namespace std;
class NUM
{
    int x;
    int y;
    int z;

public:
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display(void)
    {
        cout << x << " ";
        cout << y << " ";
        cout << z << endl;
    }
    friend void operator-(NUM &s);
};

void operator-(NUM &s)
{
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}
int main()
{
    NUM s;
    s.getdata(10, -20, 30);
    cout << "S : ";
    s.display();
    -s;
    cout << "S :";
    s.display();
    return 0;
}
