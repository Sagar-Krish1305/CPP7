#include<iostream>
using namespace std;
#include<cmath>
long long fibbo(long long n, long long k){
    if(k == 3){
        return ceil(n/2.0);
    }
   if(k >= n){
       return 0;
   }

   for(int i = n/2 ; i >= 0 ; i--){
       
   }

}
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        cout << answer(arr,n) << endl;
    }
    
    

  return 0;
}