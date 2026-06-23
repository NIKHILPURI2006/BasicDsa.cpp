#include <iostream>
using namespace std;
int digitsOfnumber(int n){
    int sum = 0;
    while(n!=0){
       int  digit = n%10;
       sum += digit;
       n = n/10;
    }
     cout<<sum<<endl;
}
int main(){
 int number = 789;
 digitsOfnumber(number);
 return 0;
}