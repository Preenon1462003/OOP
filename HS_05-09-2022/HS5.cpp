#include<iostream>
using namespace std;

class books{
    char name[300],author[300];
    int price;
    public:
    void setdata();
    void display();
    friend void range(int up,int lower,books k[],int n){
        for (int i = 0; i < n; i++)
        {
            if (up>=k[i].price && lower<=k[i].price)
            {
               k[i].display();
            }
            
        }
        
    }
};
void books::setdata(){
    cout<<"Enter the name of book -"<<endl;
    cin>>name;
    cout<<"Enter the name of author -"<<endl;
    cin>>author;
    cout<<"Enter the price of book -"<<endl;
    cin>>price;
}
void books::display(){
    cout<<"name of book -"<<name<<endl<<"Name of author -"<<author<<endl<<"Price -"<<price<<endl;
}
int main(){
    int n,up,low;
    cout<<"Enter the no of data you want to enter- \n";
    cin>>n;
    books k[100];
    for (int i = 0; i < n; i++)
    {
        k[i].setdata();
        cout<<"Entered data is -\n";
        k[i].display();
    }
    cout<<"Enter the upper limit and lower limit \n";
    cin>>up>>low;
    range(up,low,k,n);
}