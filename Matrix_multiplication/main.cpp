#include <iostream>

using namespace std;

template<typename T>

class matrix{
private:
    int rows;
    int cols;
    T** mat;
public:
    matrix(int r,int c):rows(r),cols(c){
        mat = new T*[r];
        for(int i=0;i<r;i++){
            mat[i] = new T[c];
        }
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                mat[i][j] = 0;
            }
        }
    }

void setelement(){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>mat[i][j] ;
        }
    }
}

matrix operator+(const matrix<T>& obj){
matrix<int> C(rows,cols);
for (int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
        C.mat[i][j] = mat[i][j] + obj.mat[i][j];
    }
}
return C;
}

matrix operator*(const matrix<T>& obj){
    matrix<int> C(rows,cols);
    if (rows!=obj.rows || cols!=obj.cols){
        throw invalid_argument("no equal dim.");
    }
    for (int i=0;i<rows;i++){
        for (int j=0;j<obj.cols;j++){
            for(int k=0;k<cols;k++){
                C.mat[i][j] += mat[i][k]*obj.mat[k][j];
            }
        }
    }
    return C;
}

matrix transpose(){
    matrix<T> E(cols,rows);
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            E.mat[j][i] = mat[i][j];
        }
    }
    return E;
}
void display(){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
};

int main()
{
    matrix<int> A(2,2);
    A.setelement();
    A.display();
    matrix<int> B(2,2);
    B.setelement();
    B.display();
    matrix<int> C(2,2);
    cout<<"A+B"<<endl;
    C=A+B;
    C.display();
    matrix<int> D(2,2);
    cout<<"A*B"<<endl;
    D = A*B;
    D.display();
    matrix<int> E(3,2);
    E.setelement();
    E.display();
    cout<<"transpose:"<<endl;
    matrix<int> F(2,3);
    F = E.transpose();
    F.display();
    return 0;
};
