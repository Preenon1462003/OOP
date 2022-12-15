#include <iostream>
using namespace std;
class time{
 int hour;
 int minute;
 public:
 time(){
    hour=1;
    minute=30;
    cout<<"THE TIME IS :"<<hour<<":"<<minute<<endl;
 }
 time (int h,int m=0){
    hour=h;
    minute=m;
    cout<<"THE TIME IS :"<<hour<<":"<<minute<<endl;
 }

 time(time &t){
    hour=t.hour;
    minute=t.minute;
 }
};

int main(){
    time time1(2);
    time time3(2,44);
    time time4;
    time time2=time1;
    return 0;
}