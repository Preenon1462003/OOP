#include <iostream>
using namespace std;
class salary{
    public:
    char name[50];
    int age,salary,id;
};
int main(){
    salary s;
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i = 0; i<n;i++){
        cout<<"Enter the details of "<<(i+1)<<"employee:"<<endl;
        cout<<"Enter the name:"<<endl;
        cin>>s.name;
        cout<<"Enter id:"<<endl;
        cin>>s.id;
        cout<<"Enter age:"<<endl;
        cin>>s.age;
        cout<<"Enter salary:"<<endl;
        cin>>s.salary;

        double g =s.salary+(0.8*s.salary)+(0.1*s.salary);
        cout<<"Gross salary: "<<g<<endl;
    }

    return 0;

}