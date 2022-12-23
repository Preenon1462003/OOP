#include<stdio.h>
int fact(int n);
int main(){
    int n,factorial;
    printf("Eneter the value of terms\n");
    scanf("%d",&n);
    factorial = fact(n);
    printf("The factorial is = %d",factorial);
    return 0;
}
int fact(int n){
    int result;
    if(n==0){
        return 1;
    }
    else{
        int i,f=1;
        for(i=1;i<=n;i++){

            f=f*i;
        }
        return f;
    }
    

}