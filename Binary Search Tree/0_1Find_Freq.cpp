#include<iostream>
using namespace std;
int binarySearch(int* start, int* end){
    if(start > end){
        return -1;
    }
    int mid = (end-start)/2;
    if(*(start + mid) == 1 && *(start + mid - 1) == 1){
        return bina
    }
}
bool partition(int* start, int* end){
    int sum = 0;
    for(int* i = start ; i!=end ; i++){
        sum += *i ;
    }
    
    int that_i = -1;
    
    int pxSum = 0;
    for(int* i = start ; i!=end ; i++){
        pxSum += *(i);
        if(pxSum == sum/3){
            that_i = i-start;
            
        }
        if(pxSum == 2*sum/3 && that_i != -1){
            return true;
        }
    }
    return false;
}
int main(){
    
    int arr[] = {1,5,-3,3,1,1,1};
    cout << partition(arr,arr+7);
  return 0;
}