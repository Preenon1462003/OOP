#include <iostream>
using namespace std;
class Class2;
class Class1{
    double feet_a;
    double inches_a;
    double meter_a;
    double cm_a;
    public:
   void data(){
    cout<<"DETAILS OF THE 1ST DATASET"<<endl<<endl;
    cout<<"Enter the value for distance in feet:"<<endl;
    cin>>feet_a;
    cout<<"Enter the value for distance in inches:"<<endl;
    cin>>inches_a;
    cout<<"Enter the value for distance in meter:"<<endl;
    cin>>meter_a;
    cout<<"Enter the value for distance in centimeter:"<<endl;
    cin>>cm_a;
   }
   friend void compare(Class1 &x,Class2 &y);
};


class Class2{
    double feet_b;
    double inches_b;
    double meter_b;
    double cm_b;
    public:
   void data(){
    cout<<"DETAILS OF THE 2ND DATASET"<<endl<<endl;
    cout<<"Enter the value for distance in feet:"<<endl;
    cin>>feet_b;
    cout<<"Enter the value for distance in inches:"<<endl;
    cin>>inches_b;
    cout<<"Enter the value for distance in meter:"<<endl;
    cin>>meter_b;
    cout<<"Enter the value for distance in centimeter:"<<endl;
    cin>>cm_b;
   }
   friend void compare(Class1 &x,Class2 &y);
};

void compare(Class1 &x,Class2 &y){
    if(x.feet_a>y.feet_b){
        cout<<"Value of the greater distance in feet is :"<<x.feet_a<<endl;
    }
    else{
        cout<<"Value of the greater distance in feet is :"<<y.feet_b<<endl;
    }
    if(x.inches_a>y.inches_b){
        cout<<"Value of the greater distance in inches is :"<<x.inches_a<<endl;
    }
    else{
        cout<<"Value of the greater distance in inches is :"<<y.inches_b<<endl;
    }
    if(x.meter_a>y.meter_b){
        cout<<"Value of the greater distance in meter is :"<<x.meter_a<<endl;
    }
    else{
        cout<<"Value of the greater distance in meter is :"<<y.meter_b<<endl;
    }
    if(x.cm_a>y.cm_b){
        cout<<"Value of the greater distance in centimeter is :"<<x.cm_a<<endl;
    }
    else{
        cout<<"Value of the greater distance in centimeter is :"<<y.cm_b<<endl;
    }
}
int main(){
    Class1 c1;
    Class2 c2;
    c1.data();
    c2.data();
    compare(c1,c2);
    return 0;
}