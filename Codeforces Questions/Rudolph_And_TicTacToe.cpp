#include<iostream>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s1;
        string s2;
        string s3;
        cin >> s1 >> s2 >> s3;
        //
        char c = '.';
        if(c=='.' && s1[0] == s1[1] && s1[1] == s1[2]){
            c = s1[0];
        }
        if(c=='.' && s2[0] == s2[1] && s2[1] == s2[2]){
            c = s2[0];
        }
        if(c=='.' && s3[0] == s3[1] && s3[1] == s3[2]){
            c = s3[0];
        }
        if(c=='.' && s1[0] == s2[0] && s2[0] == s3[0]){
            c = s1[0];
        }
        if(c=='.' && s1[1] == s2[1] && s2[1] == s3[1]){
            c = s1[1];
        }
        if(c=='.' && s1[2] == s2[2] && s2[2] == s3[2]){
            c = s1[2];
        }
        if(c=='.' && s1[0] == s2[1] && s2[1] == s3[2]){
            c = s1[0];
        }
        if(c=='.' && s1[2] == s2[1] && s2[1] == s3[0]){
            c = s1[2];
        }

        if(c == '.'){
            cout << "DRAW" << endl;
        }else{
            cout << c << endl;
        }
    }

    

  return 0;
}
