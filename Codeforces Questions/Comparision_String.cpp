#include<iostream>
#include<unordered_map>
using namespace std;
int maxContinuousCounter(string s,int n,char c){
    int maxCount = 0;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == c){
            count++;
            if(count > maxCount){
                maxCount = count;
            }
        }else{
            count = 0;
        }
    }
    
    return maxCount;
}
int minCost(string s, int n){
    
    return 1+max(maxContinuousCounter(s,n,'<'),maxContinuousCounter(s,n,'>'));

}
int main(){ 
    int t; cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minCost(s,n) << endl;
    }


  return 0;
}
