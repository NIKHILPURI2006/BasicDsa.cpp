#include <iostream>
#include <vector>
#include<string>
using namespace std;
class Teacher{
    private:
      double salary;

    public:
       string name;
       string dept;
       string subject;

      Teacher(); //non-parameterized-constructor


      Teacher(string name,string dept,string subject,double salary){// parameterized-constructor
         this->name = name;
         this->dept = dept;
         this->subject = subject;
         this->salary = salary;
       }
       
       Teacher(Teacher &orgObj){  //copy constructor
        cout<<"this is custom copy construtor"<<endl;
         this->name = orgObj.name;
         this->dept = orgObj.dept;
         this->subject = orgObj.subject;
         this->salary = orgObj.salary;
       }
       void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"dept : "<<dept<<endl;
        }
};
int main(){
    Teacher T1("vishal keparwal","computer science","dsa",67000);
    Teacher T2(T1); //default copy constructor;
    T2.getinfo();
}
    
