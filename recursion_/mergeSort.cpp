#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr,int st, int end, int mid){
    int i = st;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);//sorting elements and pushing them to temp
            i++;
       }else{
           temp.push_back(arr[j]);//sorting elements and pushing them to temp
           j++;
       }
    }
    while(i<=mid){
        temp.push_back(arr[i]);//   pushing elements left in the left half after done sorting
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);// pushing elements left in the right half after done sorting
        j++;
    }
    for(int idx = 0;idx<temp.size();idx++){
        arr[st+idx] =  temp[idx]; // pushing elements in the main array from temp after everything's done
    }
}
void mergeSort(vector<int> &arr,int st,int end){
    if(st<end){
        int mid = st + (end-st)/2;
        mergeSort(arr,st,mid);// for left half
        mergeSort(arr,mid+1,end);// for right half

        merge(arr,st,end,mid); // calling the merging function after the dividing is done 
    }
}
int main(){
     vector<int> arr = {4,88,9,45,2,74};
     mergeSort(arr,0,arr.size()-1);

     for( int val : arr){
        cout << val << " ";
     }
     cout << endl;
     return 0;
}