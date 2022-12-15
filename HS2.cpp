/*Create a class with integer data member.Include functions for input and output.Count the number of times for each time the 
function is called*/
#include <iostream>
using namespace std;
class data
{

public:
    int x;
    static int input_count;
    static int output_count;
    void input();
    void output();
    void display();
};

int data::input_count = 0;
int data::output_count = 0;

void data::input(){
    cout<<"Enter the value of X:"<<endl;
    cin>>x;
    input_count++;
}
void data::output(){
    cout<<"Value of X is:"<<x<<endl;
    output_count++;
}

void data::display(){
    cout<<"Number of times input function is called:"<<input_count<<endl;
    cout<<"Number of times output function is called:"<<output_count<<endl;
}
int main(){
    data d;
    d.input();
    d.output();
    d.input();
    d.output();
    d.display();

    return 0;

}