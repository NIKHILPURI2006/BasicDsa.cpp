#include <iostream>
using namespace std;
int findingGcD(int a,int b){
    while(a>0 && b>0){
        if(a>b){
        a = a%b;
      }else{
        b = b%a;
      }
}
 if(a == 0){
    return b;
 }else{
    return a;
 }

}
int main(){
    int num1 = 40;
    int num2 = 20; 
      cout<<"gcd of the given no.s are : "<<findingGcD(num1,num2)<<endl;
}