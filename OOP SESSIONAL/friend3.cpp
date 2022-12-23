#include <iostream>
#include <string.h>
using namespace std;
class BOOK{
    char name[500];
    int price;
    char author[500];

   public:
   void getdata(){
    cout<<"Enter the name of the auhtor:"<<endl;
    cin>>author;
    cout<<"Enter the name of the book:"<<endl;
    cin>>name;
    cout<<"Enter the price:"<<endl;
    cin>>price;

   }

   void show(){
    cout<<"NAME:"<<name<<endl;
    cout<<"AUTHOR:"<<author<<endl;
    cout<<"PRICE:"<<price<<endl;
    }

    friend void range(int n, BOOK k[],int low,int up){
        for(int i=0;i<n;i++){
            if(up>=k[i].price && low<=k[i].price){
             k[i].show();
            }
        }
    }
};

int main(){
    int up,low,i,n;
    cout<<"ENTER THE NUMBER OF BOOKS:"<<endl;
    cin>>n;
    BOOK k[500];
    cout<<"Enter the data:"<<endl;
    for(i=0;i<n;i++){
        k[i].getdata();
        k[i].show();
    }
    cout<<"Enter the upper limit:"<<endl;
    cin>>up;
    cout<<"Enter the lower limit:"<<endl;
    cin>>low;
    range(n,k,low,up);
    return 0;
}