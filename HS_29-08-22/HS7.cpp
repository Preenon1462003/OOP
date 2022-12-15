#include<iostream>

using namespace std;
class printch{
    public:
    void output();
    void output(int , char );
    void output(char n);    
};
void printch::output(){
    for (int i = 0; i < 80; i++)
        cout<<"*";
    cout<<endl;
}
void printch::output(int n,char c){
    for ( int i = 0; i < n; i++)
        cout<<c;
    cout<<endl;
}
void printch::output(char n){
    for (int i = 0; i < 80; i++)
        cout<<n;
    cout<<endl;
}
int main(){
    int n;
    printch p;

    printf("Enter the value of n:");
    scanf("%d",&n);
    p.output(n,'*');
    cout<<"Without any input:"<<endl;
    p.output();
}