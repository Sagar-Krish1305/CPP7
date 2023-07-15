#include<iostream>
using namespace std;
void quickSort(int* arr, int n, int start, int end){

    if(start > end){
        return;
    }

    int pivot = end;
    int i = start;
    int j = end;
    while(i < j){
        while(arr[i] <= arr[pivot] && i < j){
            i++;
        }
        while(arr[j] >= arr[pivot] && i < j){
            j--;
        }
        swap(arr[i],arr[j]);
        // i++; j--;
    }
   // cout << i << "* " << j << "* " << endl;
    if(arr[i] > arr[pivot]){
        swap(arr[i],arr[pivot]);
        quickSort(arr,n,start,i-1);
        quickSort(arr,n,i+1,end);
        return;
    }
        swap(arr[j],arr[pivot]);
        quickSort(arr,n,start,j-1);
        quickSort(arr,n,j+1,end);
    return;
}

void printArray(int* arr,int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i]  << " " ;
    }
    cout << endl;
}
int main(){
    
    int arr[] = {8,2,4,7,1,3,9,6,5};
    int n = 9;
    quickSort(arr,n,0,n-1);
    printArray(arr,n);

    

  return 0;
}