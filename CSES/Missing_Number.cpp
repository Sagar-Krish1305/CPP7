#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n-1 ; i++) cin >> arr[i];
    // 

    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i] == n) continue;
        arr[abs(arr[i])-1] *= -1;
    }

    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i] > 0){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << n << endl;

    

  return 0;
}