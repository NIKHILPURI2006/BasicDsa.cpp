#include <iostream>
#include <vector>
#include<string>
#include<queue>
using namespace std;

// ===TREES===

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

//creating a Tree..
static int idx =  -1;
Node* buildingtree(vector<int>& preorder){
    idx++;

    if(preorder[idx] == -1)return NULL;

    Node* root = new Node(preorder[idx]);//root node

    root->left = buildingtree(preorder);//left tree
    root->right = buildingtree(preorder);//right tree

    return root;
}

// preorder traversal in tree..
void  preOrder(Node* root){
    if(root == NULL)return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

// inorder traversal in tree..
void inOrder(Node* root){
    if(root == NULL)return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

// postorder traversal in tree..
void postOrder(Node* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}

// level order traversal in tree..
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

// height of a tree..
int heightOftree(Node* root){//something of postOrder...
    if(root == NULL){
        return 0;
    }
    int leftht = heightOftree(root->left);
    int rightht = heightOftree(root->right);

    return (max(leftht,rightht) + 1);
}

// count of the number of nodes in tree..
int countNodes(Node* root){

    if(root == NULL){
        return 0;
    }
    int leftct = countNodes(root->left);
    int rightct = countNodes(root->right);

    return (leftct + rightct + 1);
}
// sum of all nodes value in tree..
int sumOfnodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftsum = sumOfnodes(root->left);
    int rightsum = sumOfnodes(root->right);

    return (leftsum + rightsum + root->data);
}

//main...
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildingtree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    preOrder(root);//preorder traversal..
    cout<<endl;
    inOrder(root);//inOrder traversal..
    cout<<endl;
    postOrder(root);//postOrder traversal..
    cout<<endl;
    levelOrder(root);//level order traversal..
    cout<<endl;
    cout<<"height of tree is : "<<heightOftree(root);//height of tree..
    cout<<endl;
    cout<<"no. of nodes in tree : "<<countNodes(root);
    cout<<endl;
    cout<<"sum of data of each node : "<<sumOfnodes(root);
    cout<<endl;
    
    return 0;
}