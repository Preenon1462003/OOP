#include<iostream>  //call by reference
using namespace std;    
void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 int a=2, b=3;    
 swap(&a, &b);
 cout<<"Value of x is: "<<a<<endl;  
 cout<<"Value of y is: "<<b<<endl;  
 return 0;  
}