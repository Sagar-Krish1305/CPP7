#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
   
  int n, m;
  cin >> n >> m;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  unordered_map<int,int> map;
  for(int i = 1 ; i <= m ; i++){
    map[i] = 0;
  }
  for(int i = 0 ; i < n ; i++){
    map[arr[i]]++;
  }
  
  for(int i=0 ; i < n ; i++){
    if(map[arr[i]] > n/2){
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;


  return 0;
}