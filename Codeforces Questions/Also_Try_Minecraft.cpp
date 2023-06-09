#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
int main(){
    
    int n,q;
    cin >> n >> q;
    ll arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    //
    std::unordered_map<int,ll> h1,h2;
    h1[0] = 0;
    for(int i = 1 ; i < n ; i++){
        h1[i] = h1[i-1]+((arr[i-1]-arr[i]>0)?arr[i-1]-arr[i]:0);
    }
    h2[n-1] = 0;
    for(int i = n-2 ; i >= 0 ; i--){
        h2[i] = h2[i+1]+((arr[i+1]-arr[i]>0)?arr[i+1]-arr[i]:0);
    }
    int l,r;
    
    for(int i = 0 ; i < q ; i++){
        cin >> l >> r; 
        if(l<r)
            cout << h1[r-1]-h1[l-1] << endl;
        else
            cout << h2[r-1]-h2[l-1] << endl;
    }

  return 0;
}