#include<iostream>
using namespace std;
int maxStrength(string L, string R){
    
    int num = 0;
    if(R.length() > L.length()){
        int i = 0;
        while(i < R.length()-L.length()){
            i++;
            num+=(R[i]-'0');
        }
        //remaining times 0
        num += (i)*9;
        return num;
    }

    int i = 0;
    while(L[i] == R[i]){
        if(i == L.length()) return 0;
        i++;
    }
    
    
        num += abs(L[i]-R[i]);
        i++;
        num += (L.length()-i)*9;
    

    return num;
   
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        // 
        cout << maxStrength(s1,s2) << endl;
    }

    
    
    

  return 0;
}