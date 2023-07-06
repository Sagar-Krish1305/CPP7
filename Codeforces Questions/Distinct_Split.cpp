#include<iostream>
#include<set>
using namespace std;

int distinctSplit(string s, int n){
    set<char> Set;
    for(int i = 0 ; i < n ; i++){
        if(Set.count(s[i])){

            Set.clear();
            int count = 0;
            for(int j = i ; j < n ; j++){
                if(Set.count(s[i])==0){
                    Set.insert(s[i]);
                    count++;
                }else{
                    
                }
            }
            cout << i << endl;
            return i+count;

        }else{
            Set.insert(s[i]);
        }
    }

    return s.length();
}
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        cout << distinctSplit(s,n) << endl;
    }
  return 0;
}