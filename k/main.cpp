#include <iostream>

using namespace std;
template <typename T>
class matrix
{
private:
    int rows;
    int cols;
    T**mat;
public:
    matrix(int r,int c)
    {
        rows=r;
        cols=c;
        mat=new T*[r];
        for(int i=0;i<rows;i++)
        {
            mat[i]=new T[c];
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            mat[i][j]=0;
        }
    }

    void setele()
    {
        for(int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                cin>>mat[i][j];
            }
        }
    }
    matrix operator +(matrix <T> &a)
    {
        matrix <int> c(rows,cols);
        for(int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                c.mat[i][j]=mat[i][j]+a.mat[i][j];
            }
        }
        return c;
    }
    matrix operator *(matrix <T>  &a)
    {
        matrix<int> c{rows,cols};
        for(int i=0;i<rows;i++)
        {
            for (int j=0;j<a.cols;j++)
           {
            for (int k=0;k<cols;k++)
            {
                c.mat[i][j]+=mat[i][k]*a.mat[k][j];
            }
           }
        }
        return c;
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
    cout << "Hello world!" << endl;
     matrix<int> A(2,2);
    A.setele();
    A.display();
    matrix<int> B(2,2);
    B.setele();
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
    E.setele();
    E.display();
    cout<<"transpose:"<<endl;
    matrix<int> F(2,3);
    F = E.transpose();
    F.display();
    return 0;
}
