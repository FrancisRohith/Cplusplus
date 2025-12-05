#include <iostream>

using namespace std;
template<typename t1,typename t2>
class Calculator{
public:
    void add(t1 a,t2 b){
        cout<<a+b<<endl;
    }
    void subract(t1 a,t2 b){
        cout<<a-b<<endl;
    }
    void multiply(t1 a,t2 b){
        cout<<a*b<<endl;
    }
    void divide(t1 a,t2 b){
        cout<<a/b<<endl;
    }
};

int main()
{
    Calculator<int,float> c;
    c.add(2,4);
    c.subract(2,1.5);
    c.multiply(2,1.5);
    c.divide(24,0);
    return 0;
}


