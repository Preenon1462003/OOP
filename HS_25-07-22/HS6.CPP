#include<iostream>
using namespace std;
int main()
{
    int i, mark[10];
    float sum=0, avg;
    cout<<"Enter Marks obtained by 10 Students: ";
    for(i=0; i<10; i++)
    {
        cin>>mark[i];
        sum = sum+mark[i];
    }
    avg = sum/10;
    cout<<"\nAverage Marks = "<<avg;
    cout<<endl;
    return 0;
}