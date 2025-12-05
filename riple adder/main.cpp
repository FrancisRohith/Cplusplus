#include <iostream>
#include "FullAdder.h"
using namespace std;

int main()
{
    bool A[4] = {1,0,0,1};
    bool B[4] = {1,0,0,1};
    bool c = 0;
    FullAdder F1(A[3],B[3],c);
    FullAdder F2(A[2],B[2],F1.getcarry());
    FullAdder F3(A[1],B[1],F2.getcarry());
    FullAdder F4(A[0],B[0],F3.getcarry());
    cout<<F4.getcarry()<<" "<<F4.getsum()<<" "<<F3.getsum()<<" "<<F2.getsum()<<" "<<F1.getsum();
    return 0;
}
