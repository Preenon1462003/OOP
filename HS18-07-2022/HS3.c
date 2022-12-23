#include<stdio.h>
double multiply(int a, double b);
int main(){
    int a ;
    double b,c;
    printf("Enter the value of a and b\n");
    scanf("%d %lf",&a,&b);
    c=multiply(a,b);
    printf("The value of the multiplication is %lf",c);
    return 0;
}
double multiply(int a , double b){
    double result;
    result=a*b;
    return result;
}