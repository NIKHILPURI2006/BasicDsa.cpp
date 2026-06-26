#include <iostream>
#include <vector>
using namespace std;
int diagSum(vector<vector<int>> mat,int n){
    int sum =0;
    for(int i = 0 ;i<n;i++){
         sum += mat[i][i];
         if(i != n-i-1){
            sum += mat[i][n-i-1];
         }
    }
    return sum;
}
int main(){
 vector<vector<int>> matrix= {{1,2,3},{4,5,6},{7,8,9}};
 int n = 3 ;
 cout<<"sum of the diagnal elements of a matrix is : "<<diagSum(matrix,n)<< " "<<endl;
}