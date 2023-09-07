#include<iostream>
using namespace std;
void karatsuba(string a, string b){
    /*
        I = I1*2^(n/2) + I2;
        J = J1*2*(n/2) + J2;
        I * J = (I1*2^(n/2) + I2)*(J1*2*(n/2) + J2)
        I * J = (I1 * J1)*2^(n) + I1 * J2 *2^(n/2) + I2 * J1 * 2^(n/2) + I2 * J2;

        I * J = (I1 * J1)*2^(n) + (I1 * J2  + I2 * J1  + I1I2 + J1J2 - I1I2 - J1J2)*2^(n/2) + I2 * J2;

        I * J = (I1 * J1)*2^(n) + ( (I1 + J1)(J2 + I2) - I1I2 - J1J2)*2^(n/2) + I2 * J2;
    */
    if(a.length() != b.length()){
        int l1 = a.length(), l2 = b.length();
        if(a.length() > b.length()){
            for(int i = 0 ; i < l1-l2 ; i++){
                b = '0' + b;
            }
        }else{
            for(int i = 0 ; i < l2-l1 ; i++){
                a = '0' + a;
            }
        }

    }
        string I1 = a.substr(0,a.length()/2);
        string I2 = a.substr(a.length()/2,a.length());
        

        string J1 = b.substr(0,b.length()/2);
        string J2 = b.substr(b.length()/2,b.length());
        
        string k1 = karatsuba(I1,J1);
        k1 = appendZeros(k1 , n);
        


}
string stringSum(string s1, string s2){
    if(s1.ke
    )
    int length = min(s1.length(), s2.length());
    for(int i = length - 1)
}
string appendZeros(string a, int n){
    for(int i = 0 ; i < n ; i++){
        a = a + '0';
    }
    return a;
}
int main(){
    
    karatsuba("1231231","12034124");

  return 0;
}