#include <iostream>
#include <vector>
#include<string>
using namespace std;

class ABC {
    public:
      ABC(){
         cout<<"contructor\n";

      }
      ~ABC(){
        cout<<"destructor\n";
      }
};
int main(){
    // if(true){ //without static keyword ;
    //     ABC c1;
    // }

    if(true){
      static  ABC c1; // using static keyword the object memory stays until the program remains;
    }

    cout<<"end of function\n";
    return 0;
}