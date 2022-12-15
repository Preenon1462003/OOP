#include <iostream>
using namespace std;
class mother
{
public:
    void display()
    {
        cout <<" display mother " << endl;
    }
};
class daughter: public mother{
    public:
    void display(){
        cout<<" display daughter "<<endl;
    }
};
int main(){
    daughter obj;
    obj.display();
    obj.mother::display();
    return 0;
}