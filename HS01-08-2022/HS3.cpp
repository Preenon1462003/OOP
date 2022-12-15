#include <iostream>
using namespace std;
 
#define ARRAY 30
 
class student
{
    private:

        char  name[30];
        int   rollNo;
        int S1,S2,S3,S4,S5;
        int total;

        float percent;

    public:
       
        void Details(void);
        
        void ShowDetails(void);
};

void student::Details(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter the marks of 1st subject: "<<endl;
    cin>> S1;
    cout << "Enter the marks of 2nd subject: "<<endl;
    cin>> S2;
    cout << "Enter the marks of 3rd subject: "<<endl;
    cin>> S3;
    cout << "Enter the marks of 4th subject: "<<endl;
    cin>> S4;
    cout << "Enter the marks of 5th subject: "<<endl;
    cin>> S5;

    total = S1+S2+S3+S4+S5;
    cout<<"Total"<<total<<endl;
    
    percent=(float)total/500*100;
}
 

void student::ShowDetails(void){
    cout << "Student details:"<<endl;
    cout << "Name:"<< name << endl;
    cout<<"Roll:"<<rollNo<<endl;
    cout<<"Number of 1st subject:"<<S1<<endl;
    cout<<"Number of 1st subject:"<<S2<<endl;
    cout<<"Number of 1st subject:"<<S3<<endl;
    cout<<"Number of 1st subject:"<<S4<<endl;
    cout<<"Number of 1st subject:"<<S5<<endl;
    cout<<"Total:"<<total<<endl;
    cout<<"Total percentage:"<<percent<<endl;
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