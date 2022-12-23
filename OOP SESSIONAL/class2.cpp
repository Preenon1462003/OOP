#include<iostream>
#include<string.h>
using namespace std;

class student{
    int id;
    char name[10];
    int salary;
    int age;

    public:

    void getdata(){
        cout<<"Enter the name of the student:"<<endl;
        cin>>name;
        cout<<"Enter employee id:"<<endl;
        cin>>id;
        cout<<"Enter the employee's age:"<<endl;
        cin>>age;
        cout<<"Enter the emplyee's salary:"<<endl;
        cin>>salary;
    }
    
    void showdata(){

        int i,n,da,hra,sum;
        cout<<"Enter the number of emplyees:"<<endl;
        cin>>n;

        for(i=0;i<n;i++){
            getdata();
            cout<<"NAME:"<<name<<endl;
            cout<<"ID:"<<id<<endl;
            cout<<"AGE:"<<age<<endl;
            cout<<"SALARY:"<<salary<<endl;
            da=(0.8*salary);
            hra=(0.1*salary);
            sum=(salary+da+hra);
            cout<<"GROSS SALARY:"<<sum<<endl;

        }
    }
};

int main(){
    student s;
    s.showdata();

}