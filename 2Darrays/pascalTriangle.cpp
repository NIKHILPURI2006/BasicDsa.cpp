#include <iostream>
#include<vector>
using namespace std;

vector<int> generateRows(int row){
        vector<int> ansrow;
        long long ans = 1;
        ansrow.push_back(1);
        for(int  i = 1;i<row;i++){
            ans = ans*(row-i);
            ans = ans/(i);
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> Triangle;
        for(int i = 1;i<=numRows;i++){
           Triangle.push_back(generateRows(i));
        }
        return Triangle;
    }
    int main(){
        int n = 5;
        generate(n);
        
    }