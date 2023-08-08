#include<iostream>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n][n];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> arr[i][j] ;
            }
        }
        // 
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(arr[i][j] != arr[n-1-i][n-1-j]){
                    count++;
                    // cout << "*" << i << " "<< j<< endl;
                }
            }
        }
        // for a 4x4 grid if i = 2, j = 0 ==> mirrorI = 1 mirror j= 3

        // dissimilar are are count/2 because ij and ji both are counted

        // cout << count << endl;

        if(count/2 == k){
            cout << "Yes" << endl;
        }else if(count/2 < k && (k - count/2)%2 == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
    }
    

  return 0;
}