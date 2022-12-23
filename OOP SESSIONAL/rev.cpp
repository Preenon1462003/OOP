#include <iostream>
using namespace std;
class rev{
int n;
int num;
public:
void getdata(){
 cout<<"Enter the digit:"<<endl;
 cin>>n;
 num=n;
}

friend void reverse(rev &x);

};

void reverse(rev &x){
    int N;
    cout<<"Enter the number of digits:"<<endl;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
      a[i]=x.n%10;
      x.n=x.n/10;
    }
 
    cout<<"NUMBER:"<<endl;
    for(int i=(N-1);i>=0;i--){
        cout<<a[i];
    }
    cout<<endl<<"REVRESED NUMBER:"<<endl;
    for(int i=0;i<N;i++){
      cout<<a[i];
    }
}

int main(){
    rev r;
    r.getdata();
    reverse(r);
    return 0;
}