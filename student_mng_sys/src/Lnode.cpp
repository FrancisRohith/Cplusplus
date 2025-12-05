#include "Lnode.h"

Lnode::Lnode(int id,string name,float gpa)
{
    this->studentId = id;
    this->name = name;
    this->gpa = gpa;
    this->next = nullptr;
}


Lnode::~Lnode(){}


