#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Node{
 public:   
   int data;
   Node* next;
   Node* prev;

   Node(int val){
    data = val;
    next = prev = NULL;
   }
};

class DoublyList {
   Node* head;
   Node* tail;
public:
   DoublyList(){
    head = tail = NULL;
   }
   
   void push_front(int val){
    Node* newnode = new Node(val);

    if(head == NULL){
        head = tail = newnode;
    }else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode; 
    }
   }

   void push_back(int val){
    Node* newnode = new Node(val);

    if(head == NULL){
        head = tail = newnode;
    }else{
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
   }

   void pop_front(){
    Node* temp = head;
    head = head->next;
    if(head != NULL){
        head->prev = NULL;
    }
    temp->next = NULL;
    delete temp;
   }

   void pop_back(){
    Node* temp = tail;
    tail = tail->prev;
    if(tail != NULL){
        tail->next = NULL;
    }
    temp->prev = NULL;
    delete temp;
   }

   void print(){
    if(head == NULL){
        cout<<"its empty"<<'\n';
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"<=>";
        temp = temp->next;
    }
     cout<<"NULL\n";
   }
};
int main(){
    DoublyList dll;
    
    dll.push_front(5);
    dll.push_front(9);
    dll.push_front(7);

    dll.print();

    dll.push_back(10);
    dll.push_back(6);

    dll.print();

    dll.pop_front();

    dll.print();

    dll.pop_back();

    dll.print();

    return 0;
}