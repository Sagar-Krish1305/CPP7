#include<iostream>
#include <set>
//#include "SLL.h"
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
class Graph{
    public:
    int  Vertices; // No. Of Node
    Node* *list;
    Graph(int v){
        Vertices = v;
        for(int i = 1 ; i <= Vertices ; i++){
            list[i-1] = new Node(i);
         }
    }
    void insertion(int from, int to){
         Node* temp = *(list+from-1);
         while(temp!=NULL){
             if(temp->data == to){
                 return;
             }
             temp = temp->next;
         }
         temp = *(list+from-1);
         Node* temp2 = temp->next;
         temp->next = new Node(to);
         temp->next->next = temp2;

         temp = *(list+to-1);
         temp2 = temp->next;
         temp->next = new Node(from);
         temp->next->next = temp2;
    }
    
    void printList(){
        for(int i = 0 ; i < Vertices ; i++){
            Node* curr = *(list+i);

            while(curr!=NULL){
                cout << curr->data << " ";
                curr = curr->next;
            }
            cout<< endl;
        }
    }
};


int main(){
    
    Graph g(5);
    g.insertion(1,2);
    g.insertion(1,4);
    g.insertion(2,3);
    g.insertion(4,5);
    g.insertion(3,5);
    
    g.printList();


  return 0;
}