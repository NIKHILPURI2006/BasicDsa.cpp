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

class List{
    Node* head;
    Node* tail;
      public:
        List(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode ;
                return;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode ;
                return;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop_front(int val){
            if(head == NULL){
                return;
            }else{
                Node* temp = head;
                head = head->next;
                temp->next = NULL;
                delete temp;
            }
        }

        void pop_back(int val){
            if(head == NULL){
                return;
            }else{
                Node* temp = head;
                while(temp->next != tail){
                    temp = temp->next;
                }
                temp->next = NULL;
                delete temp;
                tail = temp ;
            }
        }

        void push_middle(int val,int pos){
            if(pos<0){
                cout<<"invalid position"<<endl;
                return;
            }

            if(pos == 0){
                push_front(val);
                return;
            }

            Node* temp = head;

             for(int i = 0; i < pos-1 && temp != NULL; i++){
               temp = temp->next;
            }

            if(temp == NULL){
                cout << "Position out of range\n";
                return;
            }

            Node* newnode = new Node(val);
            newnode->next = temp->next;
            temp->next = newnode;

            if(newnode->next == NULL){
                tail = newnode;
           }
        }

        int search(int key){
            Node* temp = head;
            int idx = 0;

            while(temp != NULL){
                if(temp->data == key){
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
            return -1;
        }

        void printLL(){
            Node* temp = head;

            while(temp != NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }    
};
int main(){
    List LL;

    LL.push_front(1);
    LL.push_front(2);
    LL.push_front(3);

    LL.push_back(8);
    LL.push_back(5);

    LL.printLL();

    LL.pop_front(3);

    LL.printLL();

    LL.pop_back(5);

    LL.printLL();

    cout<<LL.search(8)<<endl;
}
    