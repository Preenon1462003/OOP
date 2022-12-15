#include <iostream>
using namespace std;
class str{
   string s;
   int length;
   public:
   str(){
    s="";
    length=0;
   }
   str(string a,int len){
      s=a;
      length =len;
   }
   void join(string b){
    string c = s+b;
    cout<<"Joined string :"<<c;
   }
};

int main(){
    string str1,str2;
    cout<<"1st string:"<<endl;
    cin>>str1;
    cout<<"2nd string:"<<endl;
    cin>>str2;
    str add1(str1,str1.size());
    add1.join(str2);

    return 0;

}