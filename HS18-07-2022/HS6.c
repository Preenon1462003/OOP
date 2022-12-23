#include<stdio.h>
void swap(int , int );
int main(){
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a,&b);
    printf("Before swapping the values are %d and %d\n", a,b);
    swap(a,b);
    return 0;
}
void swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
   
    printf("After swapping: %d %d",a,b);
}