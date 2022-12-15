#include<iostream>
#include<string>
using namespace std;

class data_store{
    string name;
    int roll;
    int total_marks;
    public:
    friend void display(data_store s[],int n){
            int sum=0;
            for (int i = 0; i < n; i++)
            {
                cout<<"name->"<<s[i].name<<endl<<"Roll No->"<<s[i].roll<<endl<<"Marks obtained->"<<s[i].total_marks<<endl;
                sum+=s[i].total_marks;
            }
            cout<<endl<<"Average marks->"<<sum/n;
    }
    void setdata();
    void indi_display();

};
void data_store::setdata(){
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"Enter the roll"<<endl;
    cin>>roll;
    cout<<"Enter the total marks"<<endl;
    cin>>total_marks;
}
void data_store::indi_display(){
    cout<<"ENTERED DATA ARE"<<endl;
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<total_marks<<endl;
}
int main(){
    data_store s[100];
    int n;
    cout<<"Enter the no of data you wanna enter"<<endl;
    cin>>n;
    cout<<"enter the data"<<endl;    
    for (int i = 0; i < n; i++)
    {
        s[i].setdata();
        s[i].indi_display();
    }

    display(s,n);
}