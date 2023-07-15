#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
   int x,y;
   cin>>x>>y;
   if(2*x == 3*y){
       cout << 2*x+2 << endl; 
   }else{cout << max(x*2,y*3) << endl;}
}