#include<stdio.h>
int palindrome(int a);
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(palindrome(a)==0){
        printf("%d is a palindrome", a);
    }
    else{
        printf("%d is not a palindrome", a);
    }
    return 0;

}

int palindrome(int a){
    int store, remainder,reverse=0;
    store=a;
    while(a!=0){
        remainder=a%10;
        reverse=reverse*10+remainder;
        a/=10;
    }
    if(reverse==store){
        return 0;
    }
    else{
        return 1;
    }
}