#include <iostream>
#include <string.h>
using namespace std;
struct node{
    char name[50];
    int roll;
    int m[10];
    double percentage;
}data;

void getdata(){
    int i;
    cout<<"Enter the name of the student:"<<endl;
    cin>>(cin,data.name);
    cout<<"Enter the roll number of the students:"<<endl;
    cin>>data.roll;
    for(i=0;i<5;i++){
        cout<<"Enter the marks out of 100 for subject:"<<(i+1)<<endl;
        cin>>data.m[i];
    }
     
     data.percentage=(((data.m[0]+data.m[1]+data.m[2]+data.m[3]+data.m[4])/500)*100);

}


void showdata(){
    int i,j,n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    cout<<"Enter the student details"<<endl<<endl;
    for(i=0;i<n;i++){
        getdata();

        cout<<"NAME:"<<data.name<<endl;
        cout<<"ROLL:"<<data.roll<<endl;
        for(j=0;j<5;j++){
            cout<<"MARKS for sub_"<<(j+1)<<" : "<<data.m[j]<<endl;
        }
         cout<<"PERCENTAGE:"<<data.percentage;
    }

    
   

}

int main(){
    showdata();
    return 0;
}