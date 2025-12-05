#include <iostream>
#include "TaskScheduler.h"
using namespace std;

int main()
{
    TaskScheduler* A = new TaskScheduler;
    A->addTask("Task A",5);
    A->addTask("Task B",3);
    A->addTask("Task C",4);
    A->displayTasks();
    A->deleteTask("Task B");
    A->displayTasks();
//    A->cycle(3);
    delete A;
    return 0;
}
