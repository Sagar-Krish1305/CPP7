#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[2*n];
        for (int i = 0; i < 2*n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+2*n);
        cout << abs(arr[n-1] - arr[n]) << endl;
    }
    
}