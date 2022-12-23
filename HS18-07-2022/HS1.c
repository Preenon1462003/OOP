#include <stdio.h>
int sum(int a, int b); 
int main()
{
    int c;
    int a,b;
    printf("Enter the values\n");
    scanf("%d%d",&a,&b);
    c = sum(a, b);

    printf("The value of the sum is %d\n", c);
    return 0;
}
int sum(int a, int b)
{ 
    int result;
    result = a + b;
    return result;
}
