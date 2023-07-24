 /*input
3
3
4
1 2 4 8
3
2 9 1
2
1 4
*/
#include<iostream>
#include<cmath>
#include<set>
#include<unordered_map>
using namespace std;


long long binarySearchForTheQuestion(long long low, long long high, long long sum, long long sumSquare, long long c, int n){

    if(low <= high){
        long long mid = (low + high)/2;
        if(mid < 0){
           return -1;
        }
        long long ans = sumSquare + 4*mid*sum + 4*mid*mid*n;
        if(ans > c){
            return binarySearchForTheQuestion(low, mid-1, sum, sumSquare, c, n);
        }else if(ans < c){
            return binarySearchForTheQuestion(mid+1, high, sum, sumSquare, c, n);
        }
        return mid;
    }

    return binarySearchForTheQuestion(high,2*high,sum,sumSquare,c,n);
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        long long c;

        cin >> n >> c;
        int arr[n];
        long long b = 0, a = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            b += arr[i];
            a += arr[i]*arr[i];
        }

        //
        cout << binarySearchForTheQuestion(0,10,b,a,c,n) << endl;
    }

    
}