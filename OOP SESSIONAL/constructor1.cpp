#include <iostream>
using namespace std;
class time
{
    int hour;
    int minute;
    int second;
    public:
    time()
    {
        hour = 5;
        minute = 20;
        second = 30;
        cout << "Time=>" << hour << ":" << minute << ":" << second << endl;
    }

    time(int h,int s,int m=00){
        hour=h;
        minute=m;
        second=s;
        cout << "Time=>" << h << ":" << m << ":" << s << endl;
    }

    time(time &x){
        hour=x.hour;
        minute=x.minute;
        second=x.second;
        cout << "Time=>" << hour << ":" << minute << ":" << second << endl;
    }
};
int main(){
    time time1;
    time time2(5,20);
    time time3=time1;
    
    return 0;
}