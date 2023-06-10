#include<iostream>
using namespace std;
int getAnswer(int n){
    int count = 0 ;
    while(n%3==0){
        n/=3;
        count++;
    }
    /////////////////////////
    int power = (int)log2(n);
    if((int)pow(2,power)!=n){
        return -1;
    }

    if(count < power){
        return -1;
    }
    return max(power,count);

}
int main(){
    
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << getAnswer(n) << endl;
    }
    
    

  return 0;
}