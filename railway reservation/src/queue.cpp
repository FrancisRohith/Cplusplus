#include "Queue.h"

Queue::Queue()
{
    this->head = nullptr;
    this->next = nullptr;
    this->tail = nullptr;

}

Queue::~Queue()
{
    //dtor
}

void Queue::push(string tno){
    Queue* newnode = new Queue();
    if (head==nullptr){head = newnode;tail=newnode;}
    else{tail->next = newnode;}
}

bool Queue::isempty(){
if(head==nullptr){return true;}}

string Queue::pop(){
    Queue* temp = head;
    head = temp->next;
    return temp->tno;
}

string Queue::top(){return head->tno;}
