#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,8};
    int size=4;
    int maxsum=INT8_MIN;
    for(int st=0;st<size;st++){
        int cursum=0;
        int maxsum=0;
       for(int end=st;end<size;end++){
            cursum+=arr[end];
            maxsum = max(cursum,maxsum);
       }
    }


}