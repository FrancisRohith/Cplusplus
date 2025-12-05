#include "Task.h"

Task::Task(string name,int dur)
{
    this->next = nullptr;
    this->task_name = name;
    this->task_dur = dur;
}

Task::~Task(){}

