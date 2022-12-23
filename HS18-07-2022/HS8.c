#include<stdio.h>

int n;
struct employee //structure defn
{
    int age;
    char name[30];
    char add[300];
    float salary;
    
};

int main()
{   
    int size;
    printf("Enter the number of employees:\n");
    scanf("%d",&size);
    struct employee p[size];
    n=size;
    int i,sum=0;
    float avg;
    for(i=0;i<size;i++)
    {
    printf("Enter employee name\n");
    scanf(" %[^\n]s",&p[i].name);
    printf("Enter employee address\n");
    scanf(" %[^\n]s",&p[i].add);
    printf("Enter employee age\n");
    scanf("%d",&p[i].age);
    printf("Enter employee salary\n");
    scanf("%f",&p[i].salary);
    printf("\n"); 
    }
    printf("The details of the employee are:\n");
    for(i=0;i<size;i++)
    {
    printf("Employee name: %s\n",p[i].name);
    printf("Employee name: %s\n",p[i].add);
    printf("Employee id: %d\n",p[i].age);
    printf("Employee salary: %.2f rupees\n",p[i].salary);
    }
    for(i=0;i<size;i++)
    {
        sum+=p[i].salary;
    }
    avg=sum/n;
    printf("\nThe average of the salary is %0.2f\n",avg);
    return 0;
}