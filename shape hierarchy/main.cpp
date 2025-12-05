#include <iostream>

using namespace std;

class Shape{
    public:
    float virtual area(){};
    float virtual perimeter(){};
};
class Rectangle:public Shape{
public:
    float l,b;
    Rectangle(float l,float b):l(l),b(b){}
    float area() override{
        return l*b;
    }
    float perimeter() override{
        return 2*(l+b);
    }
};
class Circle:public Shape{
public:
    float r;
    Circle(float r):r(r){}
    float area() override{
        return 3.14*r*r;
    }
    float perimeter() override{
        return 2*3.14*r;
    }
};
class Triangle:public Shape{
public:
    float b,h;
    Triangle(float b,float h):b(b),h(h){}
    float area() override{
        return 0.5*b*h;
    }
    float perimeter() override{
        return 3*b;
    }
};
int main()
{
    Shape* s[] = {new Rectangle(2,3),new Circle(2),new Triangle(2,3)};
    for(int i=0;i<4;i++){
        cout<<s[i]->area()<<endl;
        cout<<s[i]->perimeter()<<endl;
    }
    return 0;
}
