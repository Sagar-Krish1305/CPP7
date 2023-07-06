#include<iostream>
using namespace std;

// Find the error (May be logical)
// This tree is AVL but not Height Augmented
class Node{
    void insertInBST(int key){
        Node* curr = this;
        while(true){
            if(curr->data > key){
                if(curr->left!=NULL){
                    curr = curr->left;
                }else{
                    curr->left = new Node(key);
                    break;
                }
            }else{
                if(curr->right!=NULL){
                    curr = curr->right;
                }else{
                    curr->right = new Node(key);
                    break;
                }
            }
        }
    }
    public:
      int data;
      Node* left, *right;
      int height;
    
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
        height = 1;
    }

    
    
    Node* insertion(int key){
        Node* curr = this;
        if(curr == NULL){
            return new Node(key);
        } 
        
         // 
        
        if(key > this->data){
            if(this->right == NULL){
                insertInBST(key);
                return this;
            }
            if(key > this->right->data){
                insertInBST(key);
               return RRRotation();
            }else{
                insertInBST(key);
               return RLRotation();
            }
        }else{
            if(this->left == NULL){
                insertInBST(key);
                return this;
            }
            if(key > this->left->data){
                insertInBST(key);
               return LRRotation();
            }else{
                insertInBST(key);
               return LLRotation();
            }
        }

    }
    // Rotations
    Node* RLRotation(){
        Node* alpha = this;
        Node* beta = this->right;
        Node* gamma = this->right->left;
        alpha->right = beta->left;
        gamma->left = beta->right;
        beta->left = alpha;
        beta->right = gamma;
        return beta;
    }

    Node* LRRotation(){
        Node* gamma = this;
        Node* alpha = this->left;
        Node* beta = this->left->right;
        alpha->right = beta->left;
        gamma->left = beta->right;
        beta->left = alpha;
        beta->right = gamma;
        return beta;
    }

    Node* LLRotation(){
        Node* gamma = this;
        Node* beta = this->left;
        gamma->left = beta->right;
        beta->right = gamma;
        return beta;
    }

    Node* RRRotation(){
        Node* alpha = this;
        Node* beta = this->left;
        alpha->left = beta->right;
        beta->right = beta->left;
        beta->left = alpha;
        return beta;
    }
    
};



// int height(Node* root){
//     if(root->left == NULL) return 0;
//     return 1 + max(height(root->left),height(root->right));
// }
int main(){
    
    Node* head = NULL;
    head = head->insertion(50);
    head = head->insertion(30);
    head = head->insertion(20);
    head = head->insertion(25);
    cout << head->data ;
  return 0;
}