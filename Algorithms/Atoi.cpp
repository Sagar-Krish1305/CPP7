#include<iostream>
using namespace std;
int myAtoi(string s) {
        int start = 0;
        while(s[start] == ' '){
            start++;
        }
        // Now the char can be '-' or a num
        bool neg = false;
        if(s[start]=='-'){
            start++;
            neg = true;
        }
        int a = 0;
        while(start < s.length()){
            a = a*10 + (s[start]-'0');
            start++;
        }

        if(neg) a = -a;
        return a;
    }
int main(){
    
    string x;
    cin >> x;
    cout << myAtoi(x);

  return 0;
}