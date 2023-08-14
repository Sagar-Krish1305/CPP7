#include<iostream>
using namespace std;
int main(){
    
    int a;
    cin >> a;

    /*
        a+b = a^b + a&b
        when a+b == a^b ==> a&b == 0;

        number of set bits in a should be unset in i
    */

   int x = a;
   int count = 0;

   //Brian Kernighan's Algorithm. to find the number of set bits. . . . . . . . . . .   
   while(x!=0){
       x = x&(x-1);
       count++;
   }


    cout << pow(2,floor(log2(a)+1)-count) << endl;


    

  return 0;
}