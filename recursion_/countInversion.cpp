#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &arr,int st,int end,int mid){
    int i = st;
    int j = mid+1;
    int invcount = 0;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);//sorting elements and pushing them to temp
            i++;
       }else{
           temp.push_back(arr[j]);//sorting elements and pushing them to temp
           j++;
           invcount += (mid-i+1);
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
    return invcount;
}
int mergeSort(vector<int> &arr,int st,int end){
    if(st<end){
        int mid = st + (end-st)/2;
        int leftInvcount =  mergeSort(arr,st,mid);// for left half
        int rightInvcount = mergeSort(arr,mid+1,end);// for right half

        int Invcount = merge(arr,st,end,mid); // calling the merging function after the dividing is done 
        return leftInvcount +  rightInvcount + Invcount;
    }
    return 0;
}
int main(){
//    vector<int> arr = {4,88,9,45,2,74};
   vector<int> arr = {1,3,5,10,2,6,8,9};
   int ans = mergeSort(arr,0, arr.size()-1);
   cout<<"total no. of inversion count is : "<<ans;
   return 0;
}