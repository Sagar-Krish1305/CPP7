#include<iostream>
using namespace std;
#define T int
class Node{
    public:
    T data;
    Node* next;
    Node(int data){
       this->data = data;
       next = NULL;
    }
    Node* reverse(){
        Node* _this = this;
        if(_this == NULL || _this->next == NULL) return _this;
        Node* temp = _this->next->reverse();
        _this->next->next = _this;
        _this->next = NULL;
        
        return temp;
    }
    void show(){
        Node* curr = this;
        while(curr!=NULL){
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
    
};

Node* copy(Node* n){
    Node* curr = n;
    Node* dummy = new Node(1);
    Node* ans = dummy;
    while(curr!=NULL){
        Node* temp = new Node(curr->data);
        dummy->next = temp;
        dummy = temp;
        curr = curr->next;
    }

    return ans->next;
    
}

Node* createALinkedList(){
    int n; cin >> n;
    if(n==-1)return NULL;
    Node* temp = new Node(n);
    temp->next = createALinkedList();
    return temp;
}
int main(){
    
    Node* n = createALinkedList();
    n->show();
    Node* n2 = copy(n);
    n2->show();
    n2 = n2->reverse();
    n2->show();
    
    
  return 0;
}