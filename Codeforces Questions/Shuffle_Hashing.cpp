#include<iostream>
using namespace std;
void shuffleHashing(string p, string h){
    if(p.length() > h.length()){
        cout << "NO" << endl;
        return;
    }
    sort(p.begin(),p.end());
    
    cout << "NO" << endl;
    
}
int main(){
    
    int t;
    cin >> t;
    while (t--)
    {
        string p;
        string h;
        cin >> p >> h;
        shuffleHashing(p,h);
    }
    
    

  return 0;
}