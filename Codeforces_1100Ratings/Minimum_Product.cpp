#include<iostream>
using namespace std;
int main(){
    
    
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;
        int differenceX = a-x;
        int differenceY = b-y;
        if(differenceX+differenceY <= n){
            cout << x*y << endl;
        }else{
            int one, two, three, four;
            if(differenceX < n){
                one = x*n;
                
            }
        }
    }

  return 0;
}
