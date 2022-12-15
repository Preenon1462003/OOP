#include <iostream>
using namespace std;
class rev1{
  int num;
  int n;
  int rev;
  int remainder;
  public:
  void input(){
    cout<<"Enter the number:"<<endl;
    cin>>num;
    rev =0;
    n=num;
    cout<<"The number is :"<<num<<endl;;
  }

  friend void reverse(rev1 &x);
};

void reverse(rev1 &x){

    int arr[5];
    
    for(int i=0;i<5 && x.n!=0;i++){
        arr[i]=x.n%10;
        x.n=x.n/10;
    }
     cout<<"The reversed number is:"<<endl;
     for(int i=0;i<5;i++){
        cout<<arr[i];
    }
   
}

int main(){
    rev1 r;
    r.input();
    reverse(r);
    return 0;
}