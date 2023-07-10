#include<iostream>
using namespace std;

long double overlapArea(int y1, int y2, int b, int h){
    return ((1.0)*(y1-y2+h)*(y1-y2+h)*b/h)/2.0;
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n,b,h;
        cin >> n >> b >> h;
        long double area = 0;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }// 
        const long double a = (0.5)*(b)*(h);
        area += a;
        for(int i = 1 ; i < n ; i++){
            if(arr[i-1] + h >= arr[i] && arr[i] >= arr[i-1]){
                area += a-overlapArea(arr[i-1],arr[i],b,h);
            }else{
                area += a;
            }
        }
        printf("%0.6Lf\n",area);
    }   
    

    
  return 0;
}