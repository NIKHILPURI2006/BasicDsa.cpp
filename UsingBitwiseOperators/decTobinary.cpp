#include <iostream>
using namespace std;
int decTobinary(int num){
    int ans=0;int pow = 1;
    while(num>0){
        int rem = num%2; // takes remainder of number  by 2
        num=num/2; // changes num to next quotient 
        ans+=rem*pow; // follows loop to convert it to binary 
        pow*=10;
       
    }
 return ans;
}
int main (){
    cout<<"binary of decimal number ="<<decTobinary(9);
}