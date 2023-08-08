#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int indexOf1 = -1, indexOf2 = -1, indexOfN = -1;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            if(arr[i] == 1){
                indexOf1 = i;
            }
            if(arr[i] == 2){
                indexOf2 = i;
            }
            if(arr[i] == n){
                indexOfN = i;
            }
        }
        /////////////
        if(indexOf2 < indexOfN && indexOfN < indexOf1){
            cout << indexOfN+1 << " " << indexOfN+1 << endl;    
        }else if(indexOf1 < indexOfN && indexOfN < indexOf2){
            cout << indexOfN+1 << " " << indexOfN+1 << endl;
        }else if(indexOfN < indexOf1 && indexOf1 < indexOf2){
            cout << indexOfN+1 << " " << indexOf1+1 << endl;
        }else if(indexOfN < indexOf2 && indexOf2 << indexOf1){
            cout << indexOfN+1 << " " << indexOf2+1 << endl;
        }else if(indexOfN > indexOf1 && indexOf1 > indexOf2){
            cout << indexOfN+1 << " " << indexOf1+1 << endl;
        }else{
            cout << indexOfN+1 << " " << indexOf2+1 << endl;
        }
       
    }
    
    

  return 0;
}