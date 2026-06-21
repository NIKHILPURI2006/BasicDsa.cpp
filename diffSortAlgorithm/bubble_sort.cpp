#include <iostream>
using namespace std;

void bubblsort(int arr[],int n ){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        }
       
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
      int n=5;//size of array ;
      int arr[]={9,5,3,10,24};
      bubblsort(arr,n);
      printarr(arr,n);

}