#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Node{
public:    
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;
public:
    CircularList(){
        head = tail = NULL;
    }
    
    void Insert_athead(int val){
        Node*newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            tail->next = head;
        }else{
            Node* newnode = new Node(val);
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }

    void Insert_attail(int val){
        Node* newnode = new Node(val);
        if( head == NULL ){
            head = tail = newnode;
            tail->next = head;
        }else{
            tail->next = newnode;
            newnode->next = head;
            tail = newnode;
        }
    }

    void Delete_athead(){
        if(head == NULL)return;

        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        head = head->next;
        
        tail->next = head;
        
        temp->next = NULL;
        delete temp;
    }

    void Delete_attail(){
        if(head == NULL)return;

        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = tail;
        Node* prev = head;
        while(prev->next != tail){
            prev = prev->next;
        }
        tail = prev;
        tail->next = head;

        temp->next = NULL;
        delete temp;
    }

    void print(){
        if(head == NULL){
            cout<<"its empty"<<endl;
        }
        cout<<head->data<<"->";
        Node* temp = head->next;
        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
};
int main(){
    CircularList cll;

    cll.Insert_athead(5);
    cll.Insert_athead(8);
    cll.Insert_athead(6);
    cll.Insert_athead(9);

    cll.print();

    cll.Insert_attail(1);
    cll.Insert_attail(7);

    cll.print();

    cll.Delete_athead();

    cll.print();

    cll.Delete_attail();

    cll.print();
}