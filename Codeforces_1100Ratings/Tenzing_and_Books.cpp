#include<iostream>
using namespace std;
string knowledgeCalculator(int n, int x){
    int a[n],b[n],c[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    for(int i = 0 ; i < n ; i++){
        cin >> b[i];
    }

    for(int i = 0 ; i < n ; i++){
        cin >> c[i];
    }
    /////////////
    int xorPastA = 0, xorPastB = 0, xorPastC = 0;
    for(int i = 0 ; i < n ; i++){
        if((x|a[i]) != x){
            break;
        }else{
            xorPastA |= a[i];
        }
    }

    for(int i = 0 ; i < n ; i++){
        if((x|b[i]) != x){
            break;
        }else{
            xorPastB |= b[i];
        }
    }

    for(int i = 0 ; i < n ; i++){
        if((x|c[i]) != x){
            break;
        }else{
            xorPastC |= c[i];
        }
    }
    
    if((xorPastA|xorPastB|xorPastC) == x){
        return "Yes";
    }
    return "No";

}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        cout << knowledgeCalculator(n,x) << endl;
    }
    

  return 0;
}