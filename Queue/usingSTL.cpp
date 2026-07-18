#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(8);
    q.push(9);
    q.push(7);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    cout<<endl;
    return 0;
}