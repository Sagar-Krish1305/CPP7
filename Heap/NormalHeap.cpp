#include<iostream>
#include<map>
using namespace std;
#define T int
#define maxSize 1000
// All Operations Made Here are of MAX_HEAP
class Heap{

    private:
    int leafIndex;
    int Tree[maxSize];

        
    int getParentIdx(int i){
        return (i-1)/2;
    }
    int getRightChild(int i){
        return (2*i+2);
    }
    int getLeftChild(int i){
        return (2*i+1);
    }
    
    void merge(int l, int r){
        if(Tree[l] > Tree[r]){
            if(Tree[getParentIdx(l)] < Tree[l]){
                swap(Tree[getParentIdx(l)], Tree[l]);
            }
        }else{
            if(Tree[getParentIdx(l)] < Tree[r]){
                swap(Tree[getParentIdx(l)], Tree[r]);
            }
        }
    }
    public:
    int peek(){
        if(leafIndex == -1) return -1;
        return Tree[0];
    }
    Heap(){
            // Tree = new int[maxSize];
            leafIndex=-1;
        }
    
    void printHeap(){
        for(int i = 0 ; i <= leafIndex ; i++){
            cout << Tree[i] << " ";
        }
        cout << endl;
    }// O(N)
    void Heapify(){ //O(N) for even creating a heap !!
        int data;
        cin >> data;

        while(data!=-1){
            Tree[++leafIndex] = data;
            cin >> data;
        }
        // 
        if(leafIndex%2){
            // Last Wale Ka Ek Hi Child Hai
            if(Tree[leafIndex] > Tree[getParentIdx(leafIndex)]){
                swap(Tree[leafIndex] , Tree[getParentIdx(leafIndex)]);
            }
            for(int i = leafIndex-1 ; i >= 2 ; i--){
                merge(i-1,i);
            }
            
        }else{
            for(int i = leafIndex ; i >= 2 ; i--){
                merge(i-1,i);
            }
        }
        
    }
   
    void insertElement(int data){
        Tree[++leafIndex] = data;
        int temp = leafIndex;
        while(temp!=0 && Tree[getParentIdx(temp)] <= Tree[temp]){
            swap(Tree[temp],Tree[getParentIdx(temp)]);
            temp = getParentIdx(temp);
        }
        return;
    }// O(Logn)

    void createHeap(){

        int data;
        cin >> data;

        while(data!=-1){
            
            insertElement(data);
            cin >> data;
        }

    } // O(nlogn) Time Complexity



    int deleteElement(){
        int data = Tree[0];
        int i = 0;
        swap(Tree[0],Tree[leafIndex]);
        leafIndex--;
        while(1){
            if(getLeftChild(i)<=leafIndex){
                if(getRightChild(i)<=leafIndex){
                    if(Tree[getLeftChild(i)] > Tree[getRightChild(i)]){
                        if(Tree[i] < Tree[getLeftChild(i)]){
                            swap(Tree[i] , Tree[getLeftChild(i)]);
                            i = getLeftChild(i);
                        }else{
                            break;
                        }
                    }else{
                         if(Tree[i] < Tree[getRightChild(i)]){
                            swap(Tree[i] , Tree[getRightChild(i)]);
                            i = getRightChild(i);
                        }else{
                            break;
                        }
                    }
                }else{
                    if(Tree[i] < Tree[getLeftChild(i)]){
                            swap(Tree[i] , Tree[getLeftChild(i)]);
                            i = getLeftChild(i);
                        }else{
                            break;
                        }
                }
            }else{
                if(getRightChild(i)<=leafIndex){
                    if(Tree[i] < Tree[getRightChild(i)]){
                            swap(Tree[i] , Tree[getRightChild(i)]);
                            i = getRightChild(i);
                    }else{
                            break;
                    }
                }else{
                    break;
                }
            }
        }
        return data;
    }

    
};

 void HeapSort(int* arr, int n){
        Heap h;
        for(int i = 0 ; i < n ; i++)
        h.insertElement(arr[i]);

        //Because of max heap we have to make it in reverse order
        for(int i = n-1 ; i >= 0; i--)
        arr[i] = h.deleteElement();
        
    }


class PriorityQueue{
    public:
    Heap h;
    unordered_map<int,int> map;
    int size;
    PriorityQueue(){
        size = 0;
    }
    void insertItem(int key, int element){
        size++;
        map[key] = element;
        h.insertElement(key);
    } // O(log N)
    int maxElement(){
        int key = h.peek();
        return map[key];  
    }//O(log N)
    int maxKey(){
        return h.peek();
    } // O(1)

    int removeMax(){
        int a=h.deleteElement();
        return map[a];
    }



};

int kthLargestElement(int* arr, int n, int k){
    PriorityQueue p; // MAX-HEAP
    int i = 0;
    while(i<n){
        p.insertItem(arr[i],arr[i]);
        i++;
    }

    while(k!=1){
        p.removeMax();
        k--;
    }
    return p.maxElement();
}   
int main(){
    
    

    
    // if(k == e) PQ = HEAP
    
    int arr[] = {1,53,23,51,13,32,12,65,58,86,75};
  // Ans For Following --> 86 75 65 58 53
    int n = 11;
    int k = 4;
    PriorityQueue q;
     
     cout << kthLargestElement(arr,n,k);
    


  return 0;
}