#include<iostream>
using namespace std;
int kThSmallestElement(int* start,int* end, int k){
    if(end - start <= 5){
        sort(start,end);
        if(k <= (end-start)) return *(start+k-1);
        return *(start + (end-start)/2);
    }
    // return -1;
    int** a; 
    a =
}
int main(){

  int arr[] = {1,5,3,2,4};
  cout << kThSmallestElement(arr,arr+4,12);
  return 0;
}