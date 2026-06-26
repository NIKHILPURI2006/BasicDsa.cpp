#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int> arr,int n ){
    if(n==0 || n==1)return true;

    return arr[n-1]>=arr[n-2] && check(arr,n-1);

}
int main(){
       vector<int> arr1 = {1,4,5,6,7};
       cout<<"ans after checking for arr1 : "<<check(arr1,5)<<endl;
       vector<int> arr2 = {1,8,5,7,6,9};
       cout<<"ans after checking for arr2 : "<<check(arr2,6)<<endl;
}