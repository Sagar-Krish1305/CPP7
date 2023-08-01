#include<iostream>
using namespace std;
#include<vector>
class Interval{
    public:
    int start;
    int end; 
    Interval(int s,int e){
        start = s;
        end = e;
    }

    // Interval operator =(){
        
    // }

};
void quickSort(Interval* arr, int n, int start, int end){

    if(start > end){
        return;
    }

    int pivot = end;
    int i = start;
    int j = end;
    while(i < j){
        while(arr[i].end <= arr[pivot].end && i < j){
            i++;
        }
        while(arr[j].end >= arr[pivot].end && i < j){
            j--;
        }
        swap(arr[i],arr[j]);
        // i++; j--;
    }
   // cout << i << "* " << j << "* " << endl;
    if(arr[i].end > arr[pivot].end){
        swap(arr[i],arr[pivot]);
        quickSort(arr,n,start,i-1);
        quickSort(arr,n,i+1,end);
        return;
    }
        swap(arr[j],arr[pivot]);
        quickSort(arr,n,start,j-1);
        quickSort(arr,n,j+1,end);
    return;
}
// void sortByFinishTime(Interval* start, Interval* end){
//     if(start > end){
//         return;
//     }
//     Interval* pivot = start;
//     Interval* i = start;
//     Interval* j = end;
//     while(i < j){
//         while((*i).end <= (*pivot).end && i < j){
//             i++;
//         }
//         while((*j).end >= (*pivot).end && i < j){
//             j--;
//         }
//         swap(i,j);
//         // i++; j--;

//     }

//     if((*i).end > (*pivot).end){
//         swap(i,pivot);
//         sortByFinishTime(start,i-1);
//         sortByFinishTime(i+1,end);
//         return;
//     }
//         // Swap J with Pivot
//         swap(j,pivot);
//         sortByFinishTime(start,j-1);
//         sortByFinishTime(j+1,end);
//     return;
// }

void printArray(Interval* s, int n){
    for(int i = 0 ; i < n ; i++){
        cout << s[i].start << " " << s[i].end << endl;
    }
    return;
}

bool areOverlapping(Interval u, Interval v){
    //if v.start or v.end any on of them are between u.start and u.end.

    if(u.start <= v.start && v.start < u.end){
        return true;
    }else if(u.start < v.end && v.end <= u.end){
        return true;
    }else if(v.start <= u.start && u.start < v.end){
        return true;
    }else if(v.start < u.end && u.end <= v.end){
        return true;
    }
    return false;
}
int main(){
    
    /*
        given a Array of intervals.. 
        --> Sorting in terms of Finish Timing
        -->Make two variables currStart and currFinish
    */
    Interval* arr = (Interval*)malloc(8*sizeof(Interval));
    int n = 8;
    arr[0] = Interval(1,2);
    arr[1] = Interval(1,20);
    arr[2] = Interval(2,13);
    arr[3] = Interval(4,8);
    arr[4] = Interval(8,18);
    arr[5] = Interval(10,20);
    arr[6] = Interval(18,23);
    arr[7] = Interval(19,24);
    // printArray(arr,8);
    quickSort(arr,n,0,n-1);
    //printArray(arr,n);
    
    // Mapping on based on number of Conflicts

    vector<Interval> v;
    
    bool anyOverlapping = false;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < v.size() ; j++){
            anyOverlapping = areOverlapping(v[j],arr[i]);
        }
        if(!anyOverlapping)v.push_back(arr[i]);
        anyOverlapping = false;
    }   

    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i].start << " " << v[i].end << endl;
    }





  return 0;
}