#include<iostream>
using namespace std;

int main()
{
   int a, i, j = 0;

   cout << "Enter number: ";
   cin >> a;

   //check for prime number
   for (i = 1; i <= a; i++)
   {
      if ((a % i) == 0)
      {
         j++;
      }
   }

   if (j == 2)
      cout << "\n" << a << " is a prime number.\n";
   else
      cout << a << " is not a prime number.\n";

   return 0;
}