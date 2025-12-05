#include <iostream>
#include <conio.h>
#include "Passenger.h"
using namespace std;

int main(){
    Passenger* A = new Passenger(105,"John",34);
    Passenger::insertp(A,201,"Emma",28);
    Passenger::insertp(A,150,"Alex",45);
    Passenger::insertp(A,50,"Sara",22);
    Passenger::insertp(A,305,"Micheal",53);
    Passenger::display(A);
    Passenger* B;
    B = Passenger::searchp(A,150);
    if (B!=nullptr){cout<<"found"<<endl;}
    Passenger::deletep(A,105);
    cout<<endl;
    Passenger::display(A);
    return 0;
}
