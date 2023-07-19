#include<iostream>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    while (t--){
        long long x;
        long long y;
        cin >> x >> y;
        cout << spiral(x,y) << endl;
    }

  return 0;
}