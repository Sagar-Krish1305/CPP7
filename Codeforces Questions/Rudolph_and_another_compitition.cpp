#include <iostream>
using namespace std;
int finalPlaceOfRudolph(int n, int m, int t){
    //teri ma ki chut
    long long rank[n][2];
    for(int i = 0 ; i < n ; i++){
        int arr[m];
        for(int j = 0 ; j < m ; j++){
            cin >> arr[j];
        }
        sort(arr,arr+m);
        long long sum = 0;
        int j=0; 
        for(j = 0 ; j < m ; j++){
            if(sum+arr[j] <= t){
                sum += arr[j];
            }else{
                break;
            }
        }
        rank[i][0] = j;
        sum = 0;
        for(int k = 0 ; k < j ; k++){
            sum += ((j-k)*arr[k]);
        }
        rank[i][1] = sum;
       
    }

    int r = 1;

    for(int i = 1 ; i < n ; i++){
        if(rank[i][0] > rank[0][0]){ // points[i] > points[rudolph]
           r++;
        }else if(rank[i][0] == rank[0][0]){
            if(rank[i][1] < rank[0][1]){
                r++;
            }
        }
    }

    return r;
}
int main(){
    
    int t,n,m,time;
    cin >> t;
    while(t--){
        cin >> n >> m >> time;
       cout <<  finalPlaceOfRudolph(n,m,time) << endl;
    }
    

  return 0;
}