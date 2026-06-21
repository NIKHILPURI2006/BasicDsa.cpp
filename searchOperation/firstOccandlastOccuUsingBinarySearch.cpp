#include <iostream>
using namespace std;



int firstOcc(int arr[],int size,int key){


    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
     int ans=0;

    while(start<=end){
           if (arr[mid]==key){
            ans = mid;
            end = mid -1;


           }
           else if(arr[mid]>key){
             end = mid - 1;
           }
           else {
            start = mid + 1;
           }

           mid = (start+end)/2;

    }
    return ans;

}
 int lastOcc(int arr[],int size,int key){       


    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
     int ans=0;

    while(start<=end){
           if (arr[mid]==key){
            ans = mid;
            start = mid + 1;


           }
           else if(arr[mid]>key){
             end = mid - 1;
           }
           else {
            start = mid + 1;
           }

           mid = (start+end)/2;

    }
    return ans;

}
int main(){
   int even[5] = {1,2,2,3,4};
   cout << "index ofsecond occ of key " << lastOcc(even,5,2) << endl;
   cout <<"index of first occ of key" << firstOcc(even,5,2) <<  endl;
} 