// WAP to print the length of a box using friend function
#include <iostream>
using namespace std;
class len{

    int length;
    public:
    void data(){
        cout<<"Enter the value of length:"<<endl;
        cin>>length;
    }
    friend void show(len &x);
};
void show(len &x){
    cout<<"Length of the box is :"<<x.length;
}
int main(){
    len box;
    box.data();
    show(box);
    return 0;
}