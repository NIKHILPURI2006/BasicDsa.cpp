#include <iostream>
using namespace std;
int linearsearch(int arr[],int sz, int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;    
}
int main(){
    int arr[]={8,9,6,12,45};
    int sz=5;
    int target=8;
    cout<<linearsearch(arr,sz,target)<<endl;
    return 0;
}