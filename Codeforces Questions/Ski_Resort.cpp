#include<iostream>
using namespace std;

long long countNumberOfWays(long long n, long long k){
    if(n<k) return 0;

    return (n-k+1)*(n-k+2)/2;

}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k,q;
        cin >> n >> k >> q;
        long long arr[n+1];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            if(arr[i] <= q){
                arr[i] = 1;
            }else{
                arr[i] = 0;
            }
        }
        arr[n] = 0;
        // // // //
         // // //
        long long maxLen = 0;
        long long sum = 0;
        for(int i = 0 ; i < n+1 ; i++){
            if(arr[i] == 1){
                maxLen++;
            }else{
                sum += countNumberOfWays(maxLen,k);
                maxLen = 0;
            }
        }
        cout << sum << endl;


    }
    

  return 0;
}