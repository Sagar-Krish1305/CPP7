#include<iostream>
using namespace std;
class Node{
    public:
        Node* left,* right;
        int data;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
};

Node* insertion(Node* root,int data){
       
        if(root==NULL) return new Node(data);
        if(root->data < data){
            root->right = insertion(root->right,data);
        }else if(root->data > data){
            root->left = insertion(root->left,data);
        }
        return root;
    }

void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root==NULL) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

Node* createBST(){
    Node* temp = NULL;
    int data;
    cin >> data;
    while(data!=-1){
        temp = insertion(temp,data);
        cin >>data;
    }
    return temp;
}
int main(){
    
    Node* temp = createBST();
    inOrder(temp);
  return 0;
}