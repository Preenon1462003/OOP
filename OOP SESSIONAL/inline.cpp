#include <iostream>
using namespace std;
class inline1
{
    int i;

public:
    void getdata()
    {
        cout << "Enter the number:" << endl;
        cin >> i;
    }
    void square();
    void cube();
};
inline void inline1::square()
{
    cout << "SQUARE:" << (i * i)<<endl;
}
inline void inline1:: cube(){
    cout<<"CUBE:"<<(i*i*i)<<endl;
}

int main(){
    inline1 i;
    i.getdata();
    i.square();
    i.cube();

    return 0;
}