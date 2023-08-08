#include<iostream>
using namespace std;
#define MOD 1000000007

int countingOrder(long long* A, long long* B, int n){
    if(n==1) {
        if(A[0] > B[0]) return 1;
        return 0;
    }
    sort(A,A+n);
        sort(B,B+n);
        long long aux[n];
        int j = n-1;
        
        int count = 0;
        for(int i = n-1; i >= 0 ; ){
            if(j < 0){
                break;
            }
            if(A[i] > B[j]){
                count++;
                i--;
            }else{
                aux[j] = count;
                j--;
            }
        }
        if(j>=0){
            for(int i = 0 ; i <= j ; i++){
                aux[i] = n;
            }
        }


        long long ans = 1;
        for(int i = 0 ; i < n ; i++){
            ans *= (aux[i]-(n-1-i));
            ans %= MOD;
            //cout << aux[i] << " " ;
        }

    return ans%MOD;
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long A[n],B[n];
        for(int i = 0 ; i < n ; i++){
            cin >> A[i];
        }
        for(int i = 0 ; i < n ; i++){
            cin >> B[i];
        }
        
        cout << countingOrder(A,B,n) << endl;
    
    }

  return 0;
}