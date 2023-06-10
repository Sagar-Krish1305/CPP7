#include<iostream>
using namespace std;
string fillString(string s, int tillNow){
    if(tillNow==s.length()) return s;
    int start = tillNow;
    while(s[start]!='B' || s[start]!='R'){
        start++;
    }
    if(s[start]=='B'){
        int count = 0;
        start--;
        while(s[start]=='?'){
            if(count%2){
                s[start]='B';
            }else{
                s[start]='R';
            }
            start--;
        }
        
    }else{
        int count = 0;
        start--;
        while(s[start]=='?'){
            if(count%2){
                s[start]='R';
            }else{
                s[start]='B';
            }
            start--;
        }
    }


    int next = s.length();
        for(int i = tillNow ; i < s.length() ; i++){
            if(s[i]=='?'){
                next = i;
                break;
            }
        }
        return fillString(s,next);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        // 
        cout << fillString(s,0)<<endl;
    }
    

  return 0;
}