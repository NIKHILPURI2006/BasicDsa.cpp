#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Person{
  public:  
    int age;
    string name;

    Person(int age,string name){
        this->age = age;
        this->name = name;
    }

};

class Student : public Person{ //inheritance of person in student;
  public :
     int roll ;

     Student(int age,string name,int roll) : Person(age,name){ //inheritane of constructor of 'person' in constructor of 'student'
         this->roll = roll;
     }

     void getinfo(){
        cout << "age : "<< age<< endl;
        cout << "name : "<< name << endl;
        cout << "roll : "<< roll<< endl;
     }
       
};

int main (){
    Student S1(16,"rahul",4140);
    Student S2(16,"nikhil",4169);

    S1.getinfo();

    S2.getinfo();


}