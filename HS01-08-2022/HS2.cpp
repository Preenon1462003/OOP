#include <iostream>
using namespace std;
 
#define ARRAY 30
 
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
       
    public:
       
        void Details(void);
        
        void ShowDetails(void);
};

void student::Details(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;

  
}
 

void student::ShowDetails(void){
    cout << "Student details:"<<endl;
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total ;
}
 
int main()
{
    student std[ARRAY]; 
    int i,b;
     
    cout << "Enter total number of students: "<<endl;
    cin >> i;
     
    for(b=0;b< i; b++){
        cout << "Enter details of student :" << b+1 << endl;
        std[b].Details();
    }
     
    cout << endl;
     
    for(b=0;b< i; b++){
        cout << "Details of student :" << (b+1) << endl;
        std[b].ShowDetails();
    }
     
    return 0;
}