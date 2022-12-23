#include<iostream>
using namespace std;

class Student{
    char name[200];
    int roll;
    public:
    int total_marks;
    void setdata(){
        cout<<"Enter the name of student \n";
        cin>>name;
        cout<<"Enter the roll of student \n";
        cin>>roll;
        cout<<"Enter the total marks  of student \n";
        cin>>total_marks;
    }
    void display(){
        cout<<"The Name of Student is:"<<name<<endl;
        cout<<"The Roll of Student is:"<<roll<<endl;
        cout<<"The Total Marks of Student is:"<<total_marks<<endl;
    }

    void minimum(){
        int n;
    int max=-9999;
    cout<<"Enter the no. of obj \n";
    cin>>n;
    Student obj[90];
    for (int i = 0; i < n; i++)
    {
        obj[i].setdata();
    }
    int ptr=0;
    for (int i = 0; i < n; i++)
    {
        if (max < obj[i].total_marks)
        {
            max=obj[i].total_marks;
            ptr=i;
        }
        
    }
    obj[0].display();
    }
};


int main()
{
    Student obj[90];
    obj->minimum();
    
    return 0;
}