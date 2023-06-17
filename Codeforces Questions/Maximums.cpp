#include<iostream>
using namespace std;
void getArray(int* b, int n){
    int a[n];
    a[0] = b[0];
    int x = a[0];
    for(int i = 1 ; i < n ; i++){
        a[i] = b[i] + max(a[i-1], x);
        if(a[i] > x) x = a[i];
    }
    
    for(int i = 0 ; i< n ; i++){
        cout << a[i] << " ";
    }
}
int main(){
    
    int n;
    cin >> n;
    int b[n];
    for(int i = 0 ; i < n ; i++) cin >> b[i];
    // 

    getArray(b,n);
    
    

  return 0;
}