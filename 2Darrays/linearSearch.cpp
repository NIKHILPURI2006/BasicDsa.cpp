#include <iostream>
#include <vector>
using namespace std;
bool checkingforTarget(vector<vector<int>> mat,int row,int col,int target){
     for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(mat[i][j] == target){
                return true ;
            }
        }
        
    }
    return false;
}
int main(){
   vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
   int row = 4;
   int col = 3;
   int key = 10;
   cout<<"ans for presence of target in matrix is : "<<checkingforTarget(matrix,row,col,key)<<" ";
}
