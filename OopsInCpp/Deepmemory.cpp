#include <iostream>
#include <vector>
#include<string>
using namespace std;
class Student {
    private:
      
    public:
        string name;
        double* cgpaptr;// deep memory using pointers (heap storage)

        Student(string name,double cgpa){// parametrized constructor
            this->name = name;
            cgpaptr = new double; //
            *cgpaptr = cgpa; // 
        }

        Student(Student &obj){ //  copy constructor
            this->name = obj.name;
            cgpaptr = new double; //
            *(cgpaptr) = *obj.cgpaptr; //
        }

        void getinfo(){
            cout<<"name : "<<name<< endl;
            cout<<"cgpa : "<<*cgpaptr<< endl;
        }

};

int main(){
    Student s1("rahul",8.5);

    Student s2(s1);

    *(s2.cgpaptr) = 9.6;

    s1.getinfo();

    s2.name = "mukul";

    s2.getinfo();
}