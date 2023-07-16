#include<iostream>
using namespace std;
int spiral(long long x, long long y){

    if(x == 1 && y == 1) return 1;
    if(max(x,y)%2==0){ 
        if(x == 1) return 1 + spiral(1,y-1);
        if(x==y){
            return 1+spiral(x-1,y);
        }else if(x > y){
            return 1+spiral(x,y+1);
        }else{ // x < y
            return 1+spiral(x,y-1);
        }
    }else{ // 
        if(y == 1) return 1 + spiral(x-1,1);
        if(x==y){
            return 1+spiral(x,y-1);
        }else if(x > y){
            return 1+spiral(x,y-1);
        }else{ // x < y
            return 1+spiral(x+1,y);
        }
    }
    
}
int main(){
    
    int t;
    cin >> t;
    while (t--){
        long long x;
        long long y;
        cin >> x >> y;
        cout << spiral(x,y) << endl;
    }
    
    

    

  return 0;
}