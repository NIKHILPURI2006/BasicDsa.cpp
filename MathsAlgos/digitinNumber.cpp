#include <iostream>
using namespace std;
int digitsOfnumber(int n){
    while(n!=0){
       int  digit = n%10;
       cout<<digit<<endl;
       n = n/10;
    }
}
int main(){
 int number = 789;
 digitsOfnumber(number);
 return 0;
}