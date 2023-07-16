#include<iostream>
using namespace std;
int main(){
    
    string s;
    cin >> s;
    char currChar = s[0];
    int len = 0;
    int maxLen = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == currChar){
            len++;
        }else{
            len =1;
            currChar = s[i];
        }
        if(len > maxLen) maxLen = len;
    }
    
    cout << maxLen << endl;

  return 0;
}