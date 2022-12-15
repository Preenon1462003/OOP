#include<iostream>
using namespace std;
class plastic{
    public:
    void sheet(int l,int b){
        cout<<"Cost for the production of sheet: "<<40*l*b<<endl;
    }
    void box(int l,int br, int h){
        cout<<"Cost for the production of box: "<<60*l*br*h<<endl;
    }

};
int main(){
    plastic obj;
    int choice;
    cout<<"enter the shape 2d(1) or 3d(2) you want to find price ";
    cin>>choice;
    if(choice==1){
        int l,b;
        cout<<"Enter dimension";
        cin>>l>>b;
        obj.sheet(l,b);
    }else if(choice==2){
        int l,b,h;
        cout<<"Enter dimension";
        cin>>l>>b;
        obj.box(l,b,h); 
    }else{
        cout<<"invalid choice";
    }
    return 0;
}