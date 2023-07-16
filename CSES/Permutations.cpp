#include<iostream>
using namespace std;
void makePermutation(int n){
    if(n==1){
        cout << 1 << endl;
    }
    if(n <= 3){
        cout << "NO SOLUTION" << endl;
        return;
    }
    if(n == 4){
        cout << "2 4 1 3 ";
        return;
    }

    if(n%2==0){
        cout << n << " ";
        makePermutation(n-1);
        return;
    }
        makePermutation(n-1);
        cout << n << " ";
    
}
int main(){
    
    int n;
    cin >> n;
    makePermutation(n);

  return 0;
}