#include <iostream>
#include <vector>
using namespace std;
void getPermutations(vector<int> &nums,int idx,vector<vector<int>> &ans){
        int n = nums.size();
        if(idx == n){
            ans.push_back({nums});
            return;
        }
        
        for(int i = idx ;i<n;i++){
            swap(nums[idx],nums[i]); //idx => ith element chioce
            getPermutations(nums,(idx + 1),ans);//recursive step for other ith values
            // backtracking
            swap(nums[idx],nums[i]);
             
        }
        
    }
int main(){
        vector<int> nums ={1,2,3};
        vector<vector<int>> ans;
        int idx = 0;
        getPermutations(nums,idx,ans);
    
}
