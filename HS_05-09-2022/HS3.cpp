#include <iostream>
using namespace std;
inline int cube(int a){
    return a*a*a;
}
inline int square(int a){
    return a*a;
}

int main(){
    int a;
   cout<<"Enter the digit:"<<endl;
   cin>>a;
   cout<<"Cube of the digit:"<<square(a)<<endl;
   cout<<"Square of the digit:"<<cube(a)<<endl;
   return 0;
}