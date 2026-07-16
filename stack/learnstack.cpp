#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Stack{
    vector<int> v;
public:
    void push(int val){
        v.push_back(val);
    }
    
    void pop(){
        v.pop_back();
    }

    int  top(){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size() == 0 ;
    }
};

int main(){
    Stack s;

    s.push(8);
    s.push(6);
    s.push(7);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}