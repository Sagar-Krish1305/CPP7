#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<iterator>
// long long answer(long long a,long long b,long long x,long long y, long long n){

//     long long Min = __LONG_MAX__;
//     for(int i = 0 ; i <= n ; i++){
        
//         if(a < x) a = x;
//          if(b < y) b = y;
//         if(a*b < Min){
//             Min = a*b;
//         }
//     }
//     return Min;
// }
int main(){
    // int t;
    // cin >> t;
    // while(t--){
    //     long long  n, a, b, x, y;
    //     cin >> a >> b >> x >> y >> n;
    //     cout << answer(a,b,x,y,n) << endl;
    // }
    
    vector<int> v;
    v.push_back(1);
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(1);
    v.insert(v.end(),v1.be);
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << endl;
    }
  return 0;
}