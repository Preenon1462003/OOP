#include<iostream>
using namespace std;
template <class x,class y>
class display{
    public:
    void display_data(x a,y b){
        cout<<a<<endl<<b;
    }
};
int main(){
    display<int,float> dead;
    int a=200;
    float zed=2.345;
    dead.display_data(a,zed);
}