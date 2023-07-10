#include<iostream>
using namespace std;

int equalValuedSubarray(int* arr, int n){
    int count = 0;
    int Max = 0;
    int prev = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == prev){
            count++;
        }else{
            if(Max<count){
                Max = count;
            }
            prev = arr[i];
            count = 1;
        }
    }
    if(Max<count){
                Max = count;
            }
    return Max;
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n],B[n];
        for(int i = 0 ; i < n ; i++) cin >> A[i];
        for(int i = 0 ; i < n ; i++) cin >> B[i];
        
        int a = equalValuedSubarray(A,n);
        int b = equalValuedSubarray(B,n);
        if(a > b){

        }else
        

    }
    

  return 0;
}