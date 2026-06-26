#include <iostream>
using namespace std;
void printnums(int n){
    if(n==1){
        cout<<"1"<<" ";
        return;
    }
    cout<<n<<" ";
    printnums(n-1);
}
int main(){
    int num  = 78;
    printnums(num);
}
