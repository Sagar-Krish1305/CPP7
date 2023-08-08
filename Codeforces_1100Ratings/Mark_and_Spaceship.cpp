#include<iostream>
using namespace std;
int main(){
    

  int t;
  cin >> t;
  while (t--){
      int a,b,x,y,n;
      cin >> a >> b >> x >> y >> n;
       ///
       /*
        if(number of operartions are greater than the difference between a-x and b-y)
        */
      
       if(n >= (a-x) + (b-y)){
           cout << x*y << endl;
       }else{
           if(x > y){
               
           }
       }
  }
  


  return 0;
}