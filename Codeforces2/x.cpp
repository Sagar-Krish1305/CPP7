#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--))
    {
        int q;
        int queries[q];
        int max = -1;
        for(int i = 0 ; i < q ; i++){
            cin >> queries[i];
            if(queries[i] >= max){
                max = queries[i];
                cout << "1";
            }else{
                if(queries[i] <= queries[0]){
                    cout << "1";
                }else{
                    cout << "0";
                }
            }
        }
        cout << endl;
    }
    
}