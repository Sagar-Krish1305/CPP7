#include<iostream>
using namespace std;
int kThSmallestElement(int* start,int* end, int k){
    if(end - start <= 5){
        sort(start,end);
        return *(start+k-1);
    }
    int n = end - start;
    // n%5 == 0
    int medians[n/5];
    int j = 0;
    int i = 0;
    for(i = 0 ; i < n ; i+=5){
      medians[j] = kThSmallestElement(start + i*5, start + 5*i + 4, 3);
    }
    // medians[j+1] = kThSmallestElement(start + i*5, start + 5*i+ (n-i), (n-i)/2);
    int pivot = kThSmallestElement(medians,medians + n/5, n/5);
    int that_i = 0;
    for(int k = 0 ; k < n ; k++){
      if(start[k] == pivot){
        that_i = pivot;
      }
    }
    
    
    swap(start[0],start[that_i]);
    i = 0;
    j = n;
    while(i < j){
      do{
        i++;
      }while(start[i] <= start[0]);
      
      do{
        j--;
      }while(start[j] > start[0]);
      if(j > i){
        swap(start[i],start[j]);
      }
    }
    swap(start[0],start[j]);


    if(j == k+1){
      return pivot;
    }else if(j < k+1){
        return kThSmallestElement(start , start+j-1 , k);
    }
    return kThSmallestElement(start+j+1 , end , k - j );
}


int main(){

  int arr[25] = {1,6,4,7,34,23,86,84,75,26,64,75,73,75,73,81,85,38,85,123,432,543,666,34,24};
  int ans = kThSmallestElement(arr,arr+25, 13);
  sort(arr, arr+25);
  cout << ans << " " << arr[12] << endl;

    // int pivot = 4;
    // pivotIndex(arr,25,pivot);
  return 0;
}