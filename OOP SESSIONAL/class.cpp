#include <iostream>
using namespace std;
class Distance{
    int feet_a;
    int inches_a;
    int sum_a;
    int sum_b;

    public:
    void getdata(){
        cout<<"Enter the distance in feet:"<<endl;
        cin>>feet_a;

        cout<<"Enter the distance in inches:"<<endl;
        cin>>inches_a;
      }

      void show(){
        cout<<"Distance in feet:"<<feet_a<<endl;

        cout<<"Distance in inches:"<<inches_a<<endl;

      }

      void add(Distance d1, Distance d2){

        sum_a= d1.feet_a+d2.feet_a;
        cout<<"Total distance in feet:"<<sum_a<<endl;

        sum_b=d1.inches_a+d2.inches_a;
        cout<<"Total distance in inches:"<<sum_b<<endl;
              }
      
    
};

int main(){
    Distance d1,d2,d3;
    d1.getdata();
    d1.show();
    d2.getdata();
    d2.show();
    d3.add(d1,d2);

    return 0;
}