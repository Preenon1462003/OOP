#include<stdio.h>
float sub(float a,float b);
int main()
{
    float a,b,c;
    printf("Enter the valurs of a and b\n");
    scanf("%f%f",&a,&b);
    c=sub(a,b);
    printf("Value of the subtraction is %f\n", c);
    return 0;
}
float sub(float a, float b){
    float result;
    result = a-b;
    return result;
}