#include <iostream>
using namespace std;
#include "SLL.h"
class Stack{
    private:
    Node* top;
    int size;
    public:
     Stack(){
         top = NULL;
         size = 0;
     }

     void push(T data){
         Node* temp = new Node(data);
         temp ->next = top;
         top = temp;
         size++;
     }

     T pop(){
         if(isEmpty()) exit(0);
         T a = top->data;
         top = top->next;
         size--;
         return a;
     }

     T peek(){
         if(isEmpty()) return -1;
         return top->data;
     }

     bool isEmpty(){
         return size==0;
     }

    
};
int main(){

    Stack s;
    s.push(20);
    cout << s.peek();
    
    return 0;
}