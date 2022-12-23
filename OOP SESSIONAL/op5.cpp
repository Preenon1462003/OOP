#include <iostream>
using namespace std;
class insrt{
    int a;
    public:
    insrt(int i){
        a=i;
    }

    friend ostream & operator <<(ostream&a1,insrt&b);
    friend istream & operator >>(istream&a2,insrt&b);
};
istream &operator >>(istream&a1,insrt&b){
 cout<<"DATA:"<<endl;
 a1 >> b.a;
 return a1;
} 
ostream &operator <<(ostream &a2,insrt&b){
    a2<<b.a;
}