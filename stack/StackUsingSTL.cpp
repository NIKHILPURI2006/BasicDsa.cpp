#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(5);
    s.push(8);
    s.push(9);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}