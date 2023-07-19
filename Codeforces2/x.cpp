#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        long long x = (N+1)/2 - 1;
        cout << 8*x*(x+1)*(2*x + 1)/6 << endl;
        
    }
    
}