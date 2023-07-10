#include<iostream>
#include<queue>
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

Node* deletion(Node* root, int data){
    
        if(root->data > data){
            // Move Left
            return deletion(root->left,data);
        }else if(root->data < data){
            // Move Right
            return deletion(root->right,data);
        }
    
    
    if(root->left == NULL && root->right == NULL){
        return NULL;
    }
    if(root->left == NULL) return root->right;
    if(root->right == NULL) return root->left;

    Node* succ = root->right;
    while(succ->left!=NULL){
        succ = succ->left;
    }
    int d = succ->data;
    deletion(root->right,succ->data);
    
    root->data = d;
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
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if(temp->left != NULL)
        q.push(temp->left);
         if(temp->right != NULL)
        q.push(temp->right);
    }
    
}
int main(){
    
    Node* temp = createBST();
    // inOrder(temp);
    levelOrderTraversal(temp);
    int n;
    cout << "\nN?"<< endl;
    cin >> n;
    deletion(temp,n);
    levelOrderTraversal(temp);
  return 0;
}