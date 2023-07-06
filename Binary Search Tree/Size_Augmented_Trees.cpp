#include<iostream>
using namespace std;
// Augmented wrt size
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    int size;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        size = 1;
    }

    


    
};
    int size(Node* key){
        if(key==NULL)return 0;
        return key->size;
    }
    int Rank(Node* root,Node* key){
        if(root==key){
             return size(root->left) + 1;
        }else if(root->data > key->data){
            return Rank(root->left,key);
        }

        return Rank(root,root) + Rank(root->right,key);
        
        
    }
    Node* insertElement(Node* root,int data){

            if(root == NULL) return new Node(data);
        
        Node* curr = root;
        
        while(true){
            curr->size++;
            if(curr->data > data){
                if(curr->left==NULL){
                    curr->left = new Node(data);
                    return root;
                }
                curr = curr->left;
            }else{
                if(curr->right == NULL){
                    curr->right = new Node(data);
                    return root;
                }
                curr = curr->right;
            }
        }
        
        return new Node(data);
    }


int main(){
    
    Node* head = NULL;
    head = insertElement(head,10);
    head = insertElement(head,7);
    head = insertElement(head,17);
    head = insertElement(head,9);
    
    head = insertElement(head,3);
    head = insertElement(head,13);
    head = insertElement(head,19);
    head = insertElement(head,11);
    head = insertElement(head,14);
    head = insertElement(head,12);

    Node* key = head->right->right;
    cout << Rank(head,key);

  return 0;
}
