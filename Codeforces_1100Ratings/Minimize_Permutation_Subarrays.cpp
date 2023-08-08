#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int indexOf1 = -1, indexOf2 = -1;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            if(arr[i] == 1){
                indexOf1 = i;
            }
            if(arr[i] == 2){
                indexOf2 = i;
            }
        }
        /////////////
        /*  
            if i have index of 1 and 2
            i can seperate them;
            if(i1 > i2){
                return max(i2  )
            }else{ // i1 < i2 
                return max(i2 ,)
            }
        */
    }
    
    

  return 0;
}