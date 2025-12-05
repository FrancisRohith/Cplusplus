#include "TaskScheduler.h"

TaskScheduler::TaskScheduler(){
    this->head = nullptr;
}

TaskScheduler::~TaskScheduler(){}

void TaskScheduler::addTask(string name,int dur){
    Task* newTask = new Task(name,dur);
    Task* temp = head;
    if (head == nullptr){
        head = newTask;
        newTask->next=head;
    }
    else{
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = newTask;
        newTask->next = head;
    }
}

void TaskScheduler::deleteTask(string name){
    Task* temp = head;
    if(head==nullptr){
        cout<<"No task to delete"<<endl;
    }
    if (head->task_name == name){
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        return;
    }
    else{
        while(temp->next!=head){
            if(temp->next->task_name == name){
                break;
            }
            else{
                temp=temp->next;
            }
        }
        temp->next = temp->next->next;
    }
}

void TaskScheduler::displayTasks(){
    Task* temp = head;
    while(temp->next!=head){
        cout<<temp->task_name<<" "<<temp->task_dur<<endl;
        temp = temp->next;
    }
    cout<<temp->task_name<<" "<<temp->task_dur<<endl;
}


