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
    
    void changedept(string newdept){
         dept = newdept;
        }
    
    void setsalary(double s){
        salary = s;
    }    
    double getsalary(){
          return salary;
    }    

};

int main(){
    Teacher t1;
    t1.name = "vishal keparwal";
    t1.dept = "electrical engineering";
    t1.subject = "power electronics";
    t1.setsalary(45000) ;
    cout<< t1.name << endl;
    cout<< t1.getsalary() << endl;
}