#include<iostream>
#include<stack>
using namespace std;
int indexOfJ(int* arr, int n){
    int minL[n], minR[n];
    int Min = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        Min = min(Min,arr[i]);
        minL[i] = Min;
    }
    Min = INT_MAX;
    for(int i = n-1 ; i > 0 ; i--){
        Min = min(Min,arr[i]);
        minR[i] = Min;
    }

    for(int i = 1 ; i < n-1 ; i++){
        if(minL[i-1] < arr[i] && arr[i] > minR[i+1]){
            return i;
        }
    }

    return -1;


}
int main(){
    
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++) cin >> arr[i];
        // 
       
        int idx = indexOfJ(arr,n), idxL, idxR;

        if(idx==-1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            for(int i = 0 ; i < idx ; i++){
                if(arr[i] < arr[idx]){
                    idxL = i;
                }
            }
            for(int i = idx+1 ; i < n ; i++){
                if(arr[i] < arr[idx]){
                    idxR = i;
                }
            }

            cout << idxL+1 << " " << idx+1 << " " << idxR+1 << endl;
        }

    }
    

  return 0;
}