#include<stdio.h>
#include<string.h>

struct employee{
    char name[100];
    char address[100];
    double salary;
};

int main(){
    struct employee arr[5];
    struct employee arr2[5];
    char temp[100];
    char temp2[100];
    double temp3=0.00;
    for(int i=0;i<5;i++){
        printf("Enter employee name: ");
        scanf("%s",&arr[i].name);
        printf("Enter employee address: ");
        scanf("%s",&arr[i].address);
        printf("Enter employee salary: ");
        scanf("%lf",&arr[i].salary);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(arr[i].name,arr[j].name)>0)
            {
                strcpy(temp,arr[i].name);
                strcpy(temp2,arr[i].address);
                temp3=arr[i].salary;
                strcpy(arr[i].name,arr[j].name);
                strcpy(arr[i].address,arr[j].address);
                arr[i].salary=arr[j].salary;
                strcpy(arr[j].name,temp);
                strcpy(arr[j].address,temp2);
                arr[j].salary=temp3;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("\nEmployee name: %s\nEmployee address: %s\nEmployee salary: %lf",arr[i].name,arr[i].address,arr[i].salary);
    }
}