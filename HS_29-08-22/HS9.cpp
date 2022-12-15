#include <iostream>
using namespace std;
class cube{
    int num;
    public:
    void input(){
        cout<<"Enter the value of the number of digits:"<<endl;
        cin>>num;
    }
    friend void cube1(cube &x);
};

void cube1(cube &x){
    int i;
    for(i=1;i<=x.num;i++){
        cout<<i*i*i<<endl;
    }
}

int main(){
    cube c;
    int n;
    c.input();
    cout<<"Cube of the digits"<<endl;
    cube1(c);
    return 0;
}