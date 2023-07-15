#include<iostream>
using namespace std;
int numberOfVaccinePack(int* arr, int n, int d , int k , int w){
    // int i = 0;
    
    // int count = 0;
    // while(i < n){
    //     int j = i+k-1;
    //     if(j >= n) j = n-1;
    //     // [1, 2, 3, 10, 11, 18];
    //     // int required = arr[j] - arr[i] - d;
    // while(arr[j] - arr[i] - d - w > 0){
    //     j--;
    // }
    // //cout << j<<" "<<i<< endl;
    // count++;
    // i = j+1;
    // }
    // return count;

    int i = 0;
    int j = i;
    int step = 0;
    int count = 0;
    while(i < n){
        if(arr[j] <= arr[i]+w+d && step < k){
            j++;
            step++;
        }else{
            count++;
            i = j;
            j = i;
            step = 0;
        }
    }
    return count;

}
int main(){

    int t;
    cin >> t;
    while(t--){
        int n,k,d,w;
        cin >> n >> k >> d >> w;
        int arr[n];
        for(int i = 0 ; i < n ; i++) cin >> arr[i];
        // 
        cout << numberOfVaccinePack(arr,n,d,k,w) << endl;


    }
    

  return 0;
}