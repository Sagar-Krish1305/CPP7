#include<iostream>
#include<map>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        //
         
        map<int,pair<int,int> > map;
        for(int i = 0 ; i < n ; i++){
            int c;
            cin >> c;
            if(!map.count(c)){
                map[c].first = i+1;
                map[c].second = i+1;
            }else{
                map[c].second = i+1;
            }
        }
        /////

        for(int i = 0 ; i < q ; i++){
            int s, f;
            cin >> s >> f;
            if(!map.count(s) || !map.count(f) || map[s].first > map[f].second){
               cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }

        }
    }
    
    

  return 0;
}