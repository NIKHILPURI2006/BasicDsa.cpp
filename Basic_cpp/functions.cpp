// #include <iostream>
// using namespace std;
//  int sumOfdigits(int n ){
//     int sum = 0;
//     while(n>0){
//          int lastDigit = n%10;
//          n/=10;
//          sum+=lastDigit;
        
//     }
//      return sum;
//  }
// int main(){
//           cout<< "sumOf digits ="<< sumOfdigits(123456789)<<endl;
//            return 0;
// }
#include <iostream>
using namespace std;
 
 int factorial(int num ){
    int fact =1;
       for(int i=1;i<=num;i++){
             fact *=i;
       }
        return fact ;
 }

 int nCr(int n,int r) {
    int  binoCoff = factorial(n)/(factorial(r)*factorial(n-r));
    return binoCoff;
    
 }

 int main (){
    cout<<"binomial cofficient ="<<nCr(8,2)<<endl;
 }
