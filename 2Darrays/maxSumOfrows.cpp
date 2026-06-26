#include <iostream>
using namespace std;
int maxSumOfRow(int mat[][3],int row,int col){
    int maxsum = INT8_MIN;
    for(int i = 0;i<row;i++){
        int sum = 0;
        for(int j = 0;j<col;j++){
            sum += mat[i][j];
        }
        maxsum = max(sum,maxsum);
    }
    return maxsum;
}
int main(){
   int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
   int row = 4;
   int col = 3;
   cout<<"max sum of the elements of row is : "<<maxSumOfRow(matrix,row,col);
}