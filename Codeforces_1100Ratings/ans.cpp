#include<iostream>
#include<stack>
using namespace std;


string answer(int* arr, int n){
    int x = *(max_element(arr,arr+n));
    if(x!=n) return "No";
    int aux[x];
    fill(aux,aux+n,0);
    for(int i = 0 ; i < n ; i++){
        aux[arr[i]-1]++;
    }
    int sum = 0;
    for(int i = x-1 ; i >= 0 ; i--){
        sum += aux[i];
        aux[i] = sum;
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i]!=aux[i]) return "No";
    }

    return "Yes";
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++) cin >> arr[i];
        //
        cout << answer(arr,n) << endl;

    }
    

return 0;
}