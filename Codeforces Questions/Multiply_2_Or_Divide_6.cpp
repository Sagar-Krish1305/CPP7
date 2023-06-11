#include<iostream>
using namespace std;
int getAnswer(int n){
    int count3 = 0, count2=0;
    while(n%3==0){
        n/=3;
        count3++; 
    }
    while (n%2==0)
    {
        n/=2;
        count2++;
    }

    if(n!=1) return -1;
    
    if(count3>=count2){
        return count3 + (count3-count2);
    }

    return -1;

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