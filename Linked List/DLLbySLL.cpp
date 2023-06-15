#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node* np;

    Node(int data){
        this->data = data;
        this->np = NULL;
    }
    void getNextOf( Node* prev){
        return XOR(x,prev);
    }
    void getPrevOf(Node* head){
        
        Node* curr = head;
        Node* prev = NULL;
        Node* temp = NULL;
        while(curr!=x){
            temp = curr;
            curr = curr->getNextOf(prev);
            prev = temp;
        }

    }
         
    

};

Node* XOR(Node* x, Node* y)
{
    return reinterpret_cast<Node*>(
        reinterpret_cast<uintptr_t>(x)
        ^ reinterpret_cast<uintptr_t>(y));
}
void traversal(Node* head){
       Node* curr = head;
       Node* prev = NULL;

}

void insert(Node** head, int data){ 
    Node* curr = *head;
    Node* prev = NULL;
    Node* temp;
    while(curr->np!=prev){
        temp = curr;
        curr = XOR(curr->np,prev);
        prev = temp;
    }
    temp = new Node(data);
    Node* next = curr;
    curr->np = XOR(curr->np,temp);
    temp->np = curr;

}
Node* createList(){
    
    Node* 

    return head;
    
}
int main(){
    
    Node* n1 = createList();
    traversal(n1);

  return 0;
}