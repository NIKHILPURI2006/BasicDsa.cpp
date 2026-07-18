#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq;
     
    dq.push_back(8);
    dq.push_back(9);
    dq.push_back(7);

    dq.push_front(3);

    cout<<dq.front()<<" "<<dq.back()<<endl;

    dq.pop_back();
    return 0;
    


}