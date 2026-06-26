#include <iostream>
using namespace std;
int fact(int n){
    if(n == 0){
        return 1;
    }
    
    return n*fact(n-1);
}
int main(){
    int num = 5;
    cout<<"factorial of given number is : "<<fact(num)<<endl;
}