#include<iostream>
#include<cmath>
using namespace std;

long long findNumberOfFractal(long long low ,long long high , long long n){
    if(low > high) return 0;
    long long mid = (low+high)/2;
    if(mid == n-1) return 0;
    long long alpha = log(n)/log(mid) + 1;
    long long ans = (pow(mid,alpha)-1)/(mid-1);
    if(ans == n) return mid;
    cout << ans;
    if(ans < n) return findNumberOfFractal(low,mid-1,n);
    return 0;
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << findNumberOfFractal(2,n-1,n) << endl;
    }
    

  return 0;
}