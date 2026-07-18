#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Node {
public:
    int data;
    Node* next;


    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;

public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);

        if(empty()){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        if(empty()){
            cout<<"ll is  empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
        return head->data;
    }

    bool empty(){
        return head == NULL;
    }
      
};

int main(){
    Queue q;
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