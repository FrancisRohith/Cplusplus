#include "reservationSys.h"
#include <iostream>
using namespace std;
reservationSys::reservationSys()
{
    this->root=nullptr;
}

reservationSys::~reservationSys()
{
}
void reservationSys::insertpassenger(int tno,string name,int age){
    insertpassenger(root,tno,name,age);
}

void reservationSys::insertpassenger(Passenger* node,int t_no,string name,int age){
    if (node==nullptr){
        node = new Passenger(t_no,name,age);;
        cout<<"added";
        return;
    }

        if(t_no<node->ticket_no){
            insertpassenger(node->lchild,t_no,name,age);

        }
        else if(t_no>node->ticket_no){
            insertpassenger(node->rchild,t_no,name,age);
        }

}

//

void reservationSys::display(){
    display(root);
}

void reservationSys::display(Passenger* node){
    if(node!=nullptr){
        display(node->lchild);
        cout<<node->ticket_no<<" "<<node->name<<" "<<node->age<<endl;
        display(node->rchild);
    }
}
