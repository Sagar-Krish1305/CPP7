#include<iostream>
using namespace std;
void quicksort(int* beg, int* end){
    int n = end - beg;
    if (n <= 1)
        return;

    int pivot = 0;
    int l = 0, r = n-1; 
    while(l<r){
        while(l<=r && *(beg+r) >= *(beg+pivot)){
            
            r--;
        }if(pivot == r) break;
        swap(*(beg+pivot),*(beg+r));
        pivot = r;

        while(l<=r && *(beg+l) <= *(beg+pivot)){
            
            l++;
        }if(pivot == l) break;
        swap(*(beg+l),*(beg+pivot));
        pivot = l;
    }

    quicksort(beg,beg+pivot-1);
    quicksort(beg+pivot+1,end);
}
int main(){
    
    int arr[] = {44,33,11,55,77,90,40,60,99,22,88,66};
    quicksort(arr,arr+12);
    for(int i = 0 ; i < 12 ; i++){
        cout << arr[i] << " ";
    }

  return 0;
}