#include <iostream>
using namespace std;
int checkArmstrongNum(int n ){
    int copyN = n;
    int sodp = 0;
    while(n!=0){
        int digit = n%10;
        sodp += (digit*digit*digit);
        n = n/10; 
    }
    return (sodp == copyN);
}
int main(){
     int num = 111;
     if(checkArmstrongNum(num)){
        cout<<"yes its an armstrong num"<<endl;

     }else{
        cout<<"no its not an armstrong num"<<endl;
     }
     return 0;
}