#include<iostream>
#include <set>
#include "SLL.h"
using namespace std;
class AdjacencyList{
    static const int  Vertices; // No. Of Node
    Node* list[Vertices];
    AdjacencyList(){
        for(int i = 0 ; i < Vertices ; i++){
            list[i] = new Node(i);
        }
    }
    void updateList(){
        for(int i = 0 ; i < Vertices ; i++){
            cout << "No. Of Neighbours Of ith Node" << endl;
            int n;
            cin >> n;
            Node* temp = list[i];
            for(int j = 0 ; j < n ; j++){
                
                int x;
                cin >> x;
                Node* next = new Node(x);
                temp->next = next;
                temp = temp->next;
            }

        }

    }

    void printList(){
        for(int i = 0 ; i < n ; i++){
            
        }
    }
};
class Graph{ // 1 to N numbered Graph
    public:
    int Vertices;

    Graph(int n){
        Vertices = n;

    }
    
};
int main(){
    
    

  return 0;
}