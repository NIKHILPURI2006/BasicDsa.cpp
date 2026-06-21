#include <iostream>
using namespace std;
int binTodecimal (int num ){
    int ans = 0;
    int pow = 1;
    while(num>0){
        int lastdigit = num%10;
         num = num/10;
         ans+=(lastdigit*pow);
         pow*=2;
    }
    return ans;
    
}
int main (){
   cout<<"dec of given binary is "<<binTodecimal(101);
}
