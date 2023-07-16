#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    // 

    long long sum = 0;
    long long toAdd = 0;
    for(int i = 1 ; i < n ; i++){
        if(arr[i-1] > arr[i]){
            toAdd = arr[i-1]-arr[i];
            arr[i] += toAdd;
            sum += toAdd;
        }
    }

    cout << sum << endl;
    

  return 0;
}