#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallindex = i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[i]){
                smallindex = j;
            }
        }
        swap(arr[i],arr[smallindex]);
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
      selectionSort(arr,n);
      printarr(arr,n);

}