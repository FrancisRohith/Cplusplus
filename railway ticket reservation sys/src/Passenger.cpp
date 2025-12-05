#include "Passenger.h"
#include<iostream>
using namespace std;
Passenger::Passenger(int tno,string name,int age)
{
    this->lchild = nullptr;
    this->rchild = nullptr;
    //8this->root = nullptr;
    this->ticket_no = tno;
    this->name = name;
    this->age = age;
}

Passenger::~Passenger(){}

Passenger* Passenger::insertp(Passenger* node,int tno,string name,int age){
    if (node==nullptr){
        Passenger* newp = new Passenger(tno,name,age);
        return newp;
    }
    else{
        if(tno<node->ticket_no){
            node->lchild = insertp(node->lchild,tno,name,age);
        }
        else if(tno>node->ticket_no){
            node->rchild = insertp(node->rchild,tno,name,age);
        }
    }
    return node;
}

void Passenger::display(Passenger* A){
    if(A!=nullptr){
        display(A->lchild);
        cout<<A->ticket_no<<" "<<A->name<<" "<<A->age<<endl;
        display(A->rchild);
    }
}

Passenger* Passenger::searchp(Passenger* node,int tno){
    if (node->ticket_no == tno){
        return node;
    }
    if(tno<node->ticket_no){
        searchp(node->lchild,tno);
    }
    searchp(node->rchild,tno);
}

Passenger* Passenger::deletep(Passenger* node, int tno) {
    if (node == nullptr) {
        return node; // Base case: Node not found
    }

    if (tno < node->ticket_no) {
        // Traverse left
        node->lchild = deletep(node->lchild, tno);
    } else if (tno > node->ticket_no) {
        // Traverse right
        node->rchild = deletep(node->rchild, tno);
    } else {
        // Node to delete found
        if (node->lchild == nullptr && node->rchild == nullptr) {
            // Case 1: No children
            delete node;
            node = nullptr;
        } else if (node->lchild == nullptr) {
            // Case 2: Only right child
            Passenger* temp = node;
            node = node->rchild;
            delete temp;
        } else if (node->rchild == nullptr) {
            // Case 3: Only left child
            Passenger* temp = node;
            node = node->lchild;
            delete temp;
        } else {
            // Case 4: Two children
            Passenger* temp = FindMin(node->rchild); // Find the in-order successor
            node->ticket_no = temp->ticket_no;
            node->age = temp->age;
            node->name = temp->name;
            // Delete the successor node in the right subtree
            node->rchild = deletep(node->rchild, temp->ticket_no);
        }
    }
    return node;
}


Passenger* Passenger::FindMin(Passenger* node){
    if(node==nullptr){return nullptr;}
    Passenger* temp = node;
    while(temp->lchild!=nullptr){
        temp=temp->lchild;
    }
    return temp;
}
