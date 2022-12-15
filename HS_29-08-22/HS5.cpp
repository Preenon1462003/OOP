#include <math.h>
#include <iostream>
using namespace std;

class Ar
{
public:
    double area(int a, int c)
    {

        double b;
        b = a * c;
        return b;
    }

    double area(double a, double b, double c)
    {
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        return area;
    }

    double area(long double rad)
    {

        double i;

        i = (3.14 * pow(rad, 2));

        return i;
    }
};

int main()
{
    Ar arr1;
    int a, c;
    long double rad, rad2, height;
    double rad1, len, a1, b1, c1;
    cout << "Enter the values of the sides of the rectangle" << endl;
    cin >> a >> c;
    cout << "Enter the radius of the sphere:" << endl;
    cin >> rad;
    cout << "Enter the value of three sides of the triangle: " << endl;
    cin >> a1 >> b1 >> c1;
    cout << "Area of the rectangle is " << arr1.area(a, c) << endl;
    cout << "Area of the sphere is:" << arr1.area(rad) << endl;
    cout << "Area of the triangle is:" << arr1.area(a1, b1, c1) << endl;
    return 0;
}