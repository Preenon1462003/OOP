#include<stdio.h>
int sum(int n);
int main(){
    int n,c;
    printf("Enter the digits\n");
    scanf("%d",&n);
    c=sum(n);
    printf("The value of the sum is %d",c);
    return 0;
}
int sum(int n){
    int sum=0;
    while(n!=0){
         sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}