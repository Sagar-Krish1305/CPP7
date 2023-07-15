#include<iostream>
using namespace std;
void makeGrid(int n){
    int k = 1, w = 2*n;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < n ; j++){
            if((i+j)%2){
                cout << k++ << " ";
            }else{
                cout << w-- << " ";
            }
            
            // if((i==n && j==0)) cout << endl;
        }
        cout << endl;
        
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    makeGrid(n);
    }

  return 0;
}
