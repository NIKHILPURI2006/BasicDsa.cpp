#include <iostream>
#include <vector>
using namespace std;
double gettingAns(int x,int n){
    if( n == 0 ){
        return 1;
    }
    return x*gettingAns(x,n-1);;
}
int main(){
   int x = 2;
   int n = 2;
   cout<<gettingAns(x,n);

}