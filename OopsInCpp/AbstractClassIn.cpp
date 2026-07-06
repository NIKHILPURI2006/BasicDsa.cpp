#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Shape{// absstract class;
    public:
      virtual void show() = 0; // pure virtual function;
};

class Circle :  public Shape{
    public :
      void show(){
        cout<< " drawing a circle ";
      }
      
};
int main (){
    Circle c1;
    c1.show();
    return 0;
}