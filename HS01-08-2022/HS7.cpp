#include <iostream>
#include<cmath>
using namespace std;

class position{
    public: 
        double x1,x2,y1,y2,dist;
};
int main(){
    position pt;
    cout<<"Enter the 'x' and 'y' coordinates of 1st position:"<<endl;
    cin>>pt.x1>>pt.y1;
    cout<<"Enter the 'x' and 'y' coordinates of 2nd position:"<<endl;
    cin>>pt.x2>>pt.y2;
    pt.dist = sqrt(pow((pt.x2 - pt.x1), 2) + (pow((pt.y2 - pt.y1),2)));
    cout<<"Distance between the points:"<<pt.dist<<endl;
    return 0;
}
