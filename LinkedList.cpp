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

    void show(){
        Node* curr = this;
        while(curr!=NULL){
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
    
};
Node* reverse(Node* n){
        Node* _this = n;
        if(_this == NULL || _this->next == NULL) return _this;
        Node* temp = reverse(_this->next);
        _this->next->next = _this;
        _this->next = NULL;
        return temp;
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
    Node* n2 = reverse(n);
    
    
  return 0;
}