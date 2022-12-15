#include <iostream>
using namespace std;
 
class Cube {
   double length;      
   double breadth;    
   double height;      
   
   public:
 
   double getVolume(void) {
      return length * breadth * height;
   }
   
   void setDimensions(double len, double h, double b) {
      length = len;
      breadth = b;
      height = h;
   }

   Cube operator+( Cube& c) {
      Cube temp;
      
      temp.length = length + c.length;
      temp.breadth = breadth + c.breadth;
      temp.height = height + c.height;
      return temp;
   }
   
   int operator>(Cube&c){
   if (length>c.length){
    return 1;
   }

   else{
    return 0;
   }
   }

};


int main() {
    Cube cube1, cube2, cube3; 
    cube1.setDimensions(3.0, 3.0, 3.0); 
    cube2.setDimensions(5.0, 5.0, 5.0); 
 
  
    cout << "Volume of cube1 : " << cube1.getVolume() << endl;
    cout << "Volume of cube2 : " << cube2.getVolume() << endl;
 
    cube3 = cube1 + cube2;
 
    cout << "Volume of cube3 : " << cube3.getVolume() << endl;

    if(cube1>cube2){
        cout<<"Volume of C1 is greater.";
    }
    else{
         cout<<"Volume of C2 is greater.";
    }
 
    return 0;
}