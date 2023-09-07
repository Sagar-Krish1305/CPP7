#include<iostream>
using namespace std;
int nextSparse(int n){
    int sparse = 0;
    int i = 0;

    /*
        if abc c == 1 b == 1 and a == 0 make a == 1
    */
    int temp = n;
    while(temp!=0){
        if((temp%2 == 1) && ((temp>>1)%2 == 1) && ((temp>>1)%2 == 0)){
            i+=2;
            sparse += pow(2,i);
            temp >>= 1;
        }else{
            i++;
            temp >>= 1;
        }
    }
    return sparse;
}
int main(){

    
    cout << nextSparse(38);
    /*
        
    */

  return 0;
}
