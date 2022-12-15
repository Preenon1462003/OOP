#include <iostream>
#include <string>
using namespace std;

template <typename T, typename U>
void fun(T arg1, U arg2)
{
    cout << "First Data entered is " << arg1 << endl;

    cout << "Second Data entered is " << arg2 << endl;
    cout << endl;
}

int main()
{
    int n = 100;
    float f = 1.423;
    char c = 'H';
    string s = "String";

    fun<int, string>(n, s);
    fun<char, float>(c, f);

    return 0;
}