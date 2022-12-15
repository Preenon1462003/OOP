#include <iostream>
using namespace std;
class plate{
protected:
int length,width;

public:
plate(){
    cout<<"Plate called"<<endl;
}
};

class box:public plate{
protected:
int length,width,height;
public:
box(){
    cout<<"Box called"<<endl;
}
};

class wood:public box{
protected:
int length,width,height,thick;
public:
wood(){
    cout<<"Wood called"<<endl;
}
};
int main(){
    wood obj;
    return 0;
}