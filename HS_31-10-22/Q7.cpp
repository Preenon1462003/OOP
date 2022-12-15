#include <iostream>
using namespace std;
class Time{
  int hour;
  int minute;
  int second;

  public:

    friend ostream &operator<<(ostream &o, Time &t);
    friend istream &operator>>(istream &i, Time &t);

};  

ostream &operator<<(ostream &o, Time &t){
    o<<"The time is:"<<t.hour<<" Hrs: "<<t.minute<<" Minutes: "<<t.second<<" Sec. "<<endl;
    return o;
}
istream &operator>>(istream &i, Time &t){
     cout << "Enter hours:";
    i >> t.hour;
    cout << "Enter minutes:";
    i >> t.minute;
    cout << "Enter secinds:";
    i >> t.second;

    return i;
}

int main()
{
    Time t;
    cin >> t;
    cout << t;
    return 0;
}
