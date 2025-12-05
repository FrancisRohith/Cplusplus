#include <iostream>
#include "Lnode.h"
#include "Linkedlist.h"
using namespace std;

int main()
{
    Linkedlist* student = new Linkedlist;
    student->addStudent(101,"John",3.5);
    student->addStudent(102,"Alice",3.8);
    student->displayAllStudent();
    student->searchStudentByID(102);
    student->updategpa(102,4.0);
    student->displayAllStudent();
    delete student;
    return 0;
}
