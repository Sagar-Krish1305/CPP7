#include<iostream>
using namespace std;
int main(){
    
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(n>=k){
            cout << 0 << endl;
        }else{
            cout << k-n << endl;
        }
    }
    

  return 0;
}