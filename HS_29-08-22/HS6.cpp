#include <iostream>
#include <math.h>
using namespace std;

class Vol
{
public:
   double volume(int a,int d,int c)
   {

      double b;
      b = a*d*c;
      return b;
   }
   double volume(double rad, double len)
   {
      double c;
      c = 3.14 *pow(rad,2)*len;
      return c;
   }

   double volume(long double rad)
   {

      double i;

      i = ((4 * 3.14 * pow(rad,3)) / 3);

      return i;
   }
};

int main()
{
   Vol volume1;
   int a,b,c;
   long double rad;
   double rad1, len;
   cout << "Enter the values of the sides of the cuboid:" << endl;
   cin >> a>>b>>c;

   cout << "Enter the radius and height of the cylinder:" << endl;
   cin >> rad1 >> len;

   cout << "Enter the radius of the sphere:" << endl;
   cin >> rad;
   cout << "Volume of the cuboid is " << volume1.volume(a,b,c) << endl;
   cout << "Volume of the cylinder is " << volume1.volume(rad1, len) << endl;
   cout << "Volume of the sphere is:" << volume1.volume(rad);

   return 0;
}