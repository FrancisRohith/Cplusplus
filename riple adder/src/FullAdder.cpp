#include "FullAdder.h"

FullAdder::FullAdder(bool A,bool B,bool C)
{
    this->sum = C^(A^B);
    this->carry = (A&B)|(B&C)|(A&C);
}

FullAdder::~FullAdder(){}

bool FullAdder::getsum(){return this->sum;}
bool FullAdder::getcarry(){return this->carry;}
