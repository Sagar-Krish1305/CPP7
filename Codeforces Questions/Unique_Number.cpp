#include<iostream>
using namespace std;

string number(int n, string s, int count){
    if(n>45) return "-1";
    int remove = 45 - n;
    
    
    
    

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int mostSignificantDigit = x%9;
        int count = (x-mostSignificantDigit)/9;
        int ans = mostSignificantDigit;
        while(count--){
            ans = ans*10+9;
        }
        cout << ans << endl;
    }
    
    

  return 0;
}