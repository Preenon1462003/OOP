#include <iostream>
using namespace std;

class student{
    protected:
    int roll_number;  
    student(){
        cout<<"Class student called"<<endl;
    }        
    void get_roll(){
      cout<<"Enter the roll number:"<<endl;
      cin>>roll_number;
    }

    void show_roll(){
        cout<<"Roll number:"<<roll_number<<endl;
    }

};

class Test: public student{
  protected:
  int sub1,sub2;
  Test(){
        cout<<"Class Test called"<<endl;
    }  

  void get_marks(){
    cout<<"Enter the marks in 1st subject and 2nd subject:"<<endl;
    cin>>sub1>>sub2;
  }

  void show_marks(){
    cout<<"Marks in the 1st subject:"<<sub1<<endl;
    cout<<"Marks in the 2nd subject:"<<sub2<<endl;

  }
};

class sports{
protected:
int score;

sports(){
        cout<<"Class sports called"<<endl;
    }  

void get_score(){
    cout<<"Enter the score:"<<endl;
    cin>>score;
}

void show_score(){
    cout<<"Score in the sports by the student is :"<<score<<endl;
}

};

class result: public sports, public Test{
    public:
    result(){
        cout<<"Class result called"<<endl;
    }  

  void display(){
    get_roll();
    get_marks();
    get_score();
    show_roll();
    show_marks();
    show_score();
  }
};

int main(){
    result res;
    res.display();

}