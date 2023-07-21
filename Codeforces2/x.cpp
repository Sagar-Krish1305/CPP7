 /*input
3
3
4
1 2 4 8
3
2 9 1
2
1 4
*/
#include<iostream>
#include<cmath>
#include<set>
#include<unordered_map>
using namespace std;

char invertChar(char c){
    if(c >= 'a' && c <= 'z'){
        return c - 'a' + 'A';
    }
    return c + 'a' - 'A';
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int m;
        cin >> m;
        vector<int> v(50000);
        for(int i = 0 ; i < m ; i++){
            int n;
            cin >> n;
            
            int k;
            for(int j = 0 ; j < n ; j++){
                cin >> k;
                v[k] = i;
            }
        }

        sort(v.begin(),v.end(),greater<int>());
        int i;
        for(i = 0 ; i < v.size() ; i++){
            if(v[i]==0) break;
        }
        for(int j = i ; j >= 0; j--){
            cout << v[j] << " ";
        }
        cout << endl;
        
    }
    
}