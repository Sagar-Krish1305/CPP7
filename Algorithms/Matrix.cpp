#include<iostream>
using namespace std;
class Matrix{
    public:
        int rows,cols;
        float** arr;
        Matrix(int rows_,int cols_){
            rows = rows_;
            cols = cols_;
            arr = (float **)malloc(rows * sizeof(float *));
            for(int i = 0 ; i < rows ; i++){
                arr[i] = new float[cols];
                fill(arr[i], arr[i]+cols,0);
            }

        }
        void makeMatrix(){
            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < cols ; j++){
                    cin >> arr[i][j];
                }
            }
            cout << "Matrix Made" << endl;
        }
        void printMatrix(){
            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < cols ; j++){
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
            cout << "Matrix Printed" << endl;
        }
        Matrix mult(Matrix c){
            if(cols != c.rows){
                cout << "Not Correct Dimensions" << endl;
                perror("Not Possible");
            }
            Matrix d(rows,c.cols);
            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < c.cols ; j++){
                    int sum = 0;
                    for(int k = 0 ; k < cols ; k++){
                        sum += arr[i][k]*c.arr[k][j];
                    }
                    d.arr[i][j] = sum;
                }
            }
            return d;
        }
        void makeLU(){
            /*
                TODO: Do the LU Decomposition of A || P*A
            
            */
            
                for(int j = 0 ; j < cols ; j++){
                    float pivot = arr[j][j];
                    if(pivot == 0){
                        for(int i = j+1 ; i < rows ; i++){
                            if(arr[i][j]!=0){
                                swapRows(i,j);
                                break;
                            }
                        }
                    }
                    Matrix E(rows,rows);
                    E.Identity();
                    for(int i = j+1 ; i < rows ; i++){
                        float curr = arr[i][j];
                        if(curr == 0){
                            continue;
                        }
                        //R2 = R2 + (pivot)/(curr)*R1
                        Matrix r = getRow(i);
                        Matrix r1 = getRow(j);
                        r1.multiplyToRow(1.0*(pivot)/(curr),0);
                        r.add(r1);
                    }   
                }
                printMatrix();
                cout << "Done LU" << endl;
        }
        Matrix getRow(int i){
            Matrix m(1,cols);
            for(int x = 0 ; x < cols ; x++){
                m.arr[0][x] = arr[i][x];
            }
            return m;
        }
        void swapRows(int i, int j){
            if(i >= rows || j >= rows){
                cout << "Not Possible" << endl;
                return;
            }
            for(int x = 0 ; x < cols ; x++){
                swap(arr[i][x],arr[j][x]);
            }

        }

        Matrix addRows(int i, int j){
            Matrix r(1,cols);
            if(i >= rows || j >= rows){
                cout << "Not Possible" << endl;
                return r;
            }
            
            for(int x = 0 ; x < cols ; x++){
                r.arr[0][x] = arr[i][x] + arr[j][x];
            }
            return r;
        }

        Matrix multiplyToRow(float k, int i){
            Matrix r(1,cols);
            if(i >= rows){
                cout << "Not Possible" << endl;
                return r;
            }
            
            for(int x = 0 ; x < cols ; x++){
                r.arr[0][x] = k*arr[i][x];
            }
            return r;
        }
        Matrix add(Matrix m){
            Matrix m1(rows,cols);
            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < cols ; j++){
                    m1.arr[i][j] = arr[i][j] + m.arr[i][j];
                }
            }
            return m1;
        }
        void Identity(){

            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < cols ; j++){
                    if(i == j) arr[i][j] = 1;
                }
            }
        }
};
int main(){
        Matrix m1(4,4);

        m1.makeMatrix();
        m1.makeLU();
        m1.printMatrix();



    return 0;
}