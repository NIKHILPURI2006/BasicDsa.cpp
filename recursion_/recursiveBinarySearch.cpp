#include <iostream>
#include <vector>
using namespace std;
//recursive func for performing bs;
int  bs(vector<int> arr,int tar,int st,int end){
    if(st<=end){
    int mid = st + (end-st)/2;
    if(arr[mid] == tar){
        return mid;
    }else if(arr[mid]>tar){
        return bs(arr,tar,st,mid-1);
    }else{
        return bs(arr,tar,mid+1,end);
    }
  }
  return -1;
}
//main func calling recursive func;
int main (){
   vector<int> arr1 = {1,2,5,8,9,33,56,100};
   int to_find = 33;
   int st = 0;
   int end  = arr1.size()-1;
   cout<<bs(arr1,to_find,st,end);
}