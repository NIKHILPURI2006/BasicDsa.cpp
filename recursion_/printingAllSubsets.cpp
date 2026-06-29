#include <iostream>
#include <vector>
using namespace std;
void calculatingSubsets(vector<int> &arr,vector<int> &ans,int i){
     if(i == arr.size()){
        for (int val:ans){
           cout<<val<<" ";
        }
        cout<<endl;
        return;
     }
    // include case 
    ans.push_back(arr[i]);
    calculatingSubsets( arr,ans,i+1);

    //  backtrack
    ans.pop_back();
    //  exclude
    calculatingSubsets( arr,ans,i+1);
}
int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> ans = {};
    calculatingSubsets( arr1,ans,0);
}