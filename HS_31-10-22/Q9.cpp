#include <iostream>
using namespace std;
class NUM
{
    int num;

public:
    void input()
    {
        cin >> num;
    }
    int operator==(NUM &n)
    {
        if (num == n.num)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }
};

int main()
{
    NUM n1, n2;
    cout << "Enter the first number:" << endl;
    n1.input();
    cout << "Enter the second number:" << endl;
    n2.input();
    if (n1 == n2)
    {
        cout << "Both the numbers are same." << endl;
    }
    else
    {
        cout << "The numbers are not same.";
    }

    return 0;
}