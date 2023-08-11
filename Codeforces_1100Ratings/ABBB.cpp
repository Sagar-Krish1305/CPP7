#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        /////////
        int As = 0, Bs = 0;
        bool flagForB = false;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'A'){
                As++;
            }else{
                if(As != 0){
                    As--;
                }else{
                    if(flagForB){
                        Bs--;
                    }else{
                        Bs++;
                    }
                    flagForB = !flagForB;
                }
            }
        }

        cout << Bs + As << endl;
    }
    

  return 0;
}