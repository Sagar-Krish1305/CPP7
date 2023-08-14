#include<iostream>
using namespace std;
int kadaneAlgo(int* arr, int n){
    // -2 +1 +2 +3 +5 -4 -3 +2 +2 +4
    int sum = 0;
    int Max = INT_MIN;
    
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(Max < sum){
            Max = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    //if(Max == INT_MIN) return *min_element(arr,arr+n);
    // if(Max == 0) return *max_element(arr,arr+n);
    return Max;

}
int main(){
    
    int arr[] = {-2,0,2,-1,4,-4,-3,-2,-2,-2};
    int n = 10;

    cout << kadaneAlgo(arr,n) << endl;


    

  return 0;
}
