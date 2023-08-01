#include<iostream>
using namespace std;
#include<cmath>

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
       cin >> n;   
       int arr[n]; 
        for(int i = 0 ; i < n ; i++) cin >> arr[i];
        //
        int num0 = 0;
        for(int i = 0 ; i < n ; i++) if(arr[i] == 0) num0++;
        if(num0 >= n/2 ){
            cout << num0-((num0%2==0)?0:1) << endl;
            for(int i = (num0%2==0)?0:1 ; i < num0 ; i++){
                cout << 0 << " ";
            }
            cout << endl;
        }else{
            cout << n-num0-((num0%2==0)?0:1) << endl;
            for(int i = (num0%2==0)?0:1 ; i < n-num0 ; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
    
    

  return 0;
}