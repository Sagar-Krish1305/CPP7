#include<iostream>
using namespace std;
int answer(int arr[], int n, int k){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(abs(i+1-arr[i])!=k) count++;
    }
    if(count == 0){
        return 0;
    }else if(count == 2){
        return 1;
    }
    return -1;
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n ,
         k, arr[n];
        cin >> n >> k;
        for(int i = 0 ; i < n ; i++) cin >> arr[i];
        cout << answer(arr,n,k) << endl;
    }

  return 0;
}