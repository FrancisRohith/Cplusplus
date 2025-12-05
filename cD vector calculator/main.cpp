#include <iostream>

using namespace std;

class Vector3D{
private:
    int x;
    int y;
    int z;
public:
    Vector3D(int x,int y,int z):x(x),y(y),z(z){}
    Vector3D(){}
    Vector3D operator+(const Vector3D& obj){
        Vector3D C;
        C.x = x+obj.x;
        C.y = y+obj.y;
        C.z = z+obj.z;
        return C;
    }
    Vector3D operator*(int s){
        Vector3D  D;
        D.x = x*s;
        D.y = y*s;
        D.z = z*s;
        return D;
    }
    void display(){
        cout<<x<<"i "<<y<<"j "<<z<<"k"<<endl;
    }

};

int main()
{
    Vector3D v1(1,2,3);
    Vector3D v2(1,2,3);
    Vector3D v3;
    v3=v1+v2;
    v3.display();
    Vector3D v4;
    v4 = v3*2;
    v4.display();
    return 0;
}
