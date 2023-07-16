#include<iostream>
using namespace std;
void weird(long long n){
    if(n==1){
        cout << 1 << " " << endl;
        return;
    }
    cout << n << " ";
    if(n%2 == 0){
        n = n / 2;
    }else{
        n = 3*n + 1;
    }
    return weird(n);
}
int main(){
    
    long long n;
    cin >> n;
    weird(n);

  return 0;
}