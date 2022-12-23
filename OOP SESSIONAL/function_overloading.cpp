#include <iostream>
using namespace std;
class print{
  public:
  void printch(){
     for(int i=0;i<80;i++){
        cout<<"*";
     }
     cout<<endl;
  }
  void printch(char c){
    for(int i=0;i<80;i++){
        cout<<c;
    }
    cout<<endl;
  }

  void printch(int n, char c){
    for(int i=0;i<n;i++){
        cout<<c;
    }
    cout<<endl;
  }
};

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    print p;
    p.printch();
    p.printch('a');
    p.printch(n,'a');

    return 0;
}