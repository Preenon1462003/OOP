#include <iostream>
using namespace std;
 
class Complex{
public:
  float real;
  float img;

  Complex(float r=0, float i=0){
    real = r;
    img = i;
  }

  Complex operator+( Complex &obj){
    Complex temp;
    temp.img = img + obj.img;
    temp.real = real + obj.real;
    return temp;
  }

  Complex operator-( Complex &obj){
    Complex temp;
    temp.img = img - obj.img;
    temp.real = real - obj.real;
    return temp;
  }

  void display(){
    cout << real << " + " << img << "i" << endl;
  }
};
 
int main()
{
  Complex a, b, c;

  cout << "Enter real and complex parts of the first complex number: " << endl;
  cin >> a.real;
  cin >> a.img;

  cout << "Enter real and complex parts of the second complex number: " << endl;
  cin >> b.real;
  cin >> b.img;

  cout << "Addition Result: ";
  c = a+b;
  c.display();

  cout << "Subtraction Result: ";
  c = a-b;
  c.display();

  return 0;
}