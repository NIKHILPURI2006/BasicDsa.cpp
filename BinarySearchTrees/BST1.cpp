
#include <iostream>
#include <vector>
#include<string>
#include<queue>
#include <map>
using namespace std;

class Node{
    public:
      int data;
      Node* left;
      Node* right;

      Node(int val){
         data = val;
         left = right = NULL;
      }
};

// inserting a node in Bst;
Node* insert(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}
// building bst;
Node* buildBst(vector<int> arr){
    Node* root = NULL;

    for(int val  : arr){
        root = insert(root,val);
    }
    return root;
}
// cout elements of bst in inorder format;
void inOrder(Node* root){
    if(root == NULL)return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

// searching element is in bst or not;
bool search(Node* root,int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(key < root->data ){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

// returns Inorder successor (leftmost node in right subtree);
Node* getinordersuccessor(Node* root){
    while(root != NULL && root->left != NULL){
        root = root->left;
    }
    return root;
}
// for deleting any node from bst;
Node* delnode(Node* root,int key){// key => value to delete
    if(root == NULL){
        return NULL;
    }
    if(key < root->data){
        root->left = delnode(root->left,key);
    }
    else if(key > root->data){
        root->right = delnode(root->right,key);
    }
    else{
        // key == root;
        if(root->left == NULL){
            // for  deleting root with 0,1 children;
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            // for  deleting root with 0,1 children;
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            // for deleting root with 2 children;
            Node* IS = getinordersuccessor(root->right);
            root->data = IS->data;
            root->right = delnode(root->right,IS->data);
        }
    }
    return root;
}

int main(){
    vector<int> arr = {3,2,1,5,6,4};

    Node* root = buildBst(arr);

    inOrder(root);
    cout<<endl;
    cout<<search(root,6);
    cout<<endl;

    inOrder(root);
    cout<<"before"<<endl;

    delnode(root,4);

    inOrder(root);
    cout<<"after"<<endl;
}