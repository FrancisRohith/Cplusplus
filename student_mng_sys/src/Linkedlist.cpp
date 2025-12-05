#include "Linkedlist.h"
#include<iostream>
using namespace std;
Linkedlist::Linkedlist()
{
    this->head = nullptr;
}

Linkedlist::~Linkedlist(){}
void Linkedlist::addStudent(int id,string name,float gpa){
    Lnode* newNode = new Lnode(id,name,gpa);
    if (head == nullptr)  {
    this->head = newNode;
    }else{
    Lnode* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next = newNode;}
    cout << "Adding Student: ";
    cout << "ID:" << newNode->studentId << " ";
    cout << "Name:" << newNode->name << " ";
    cout << "GPA:" << newNode->gpa << " " << endl;
}

void Linkedlist::displayAllStudent(){
        Lnode* temp = head;
    cout<<"Displaying All Students:"<<endl;
    while(temp->next != nullptr){

        cout<<"ID="<<temp->studentId<<", Name="<<temp->name<<", GPA="<<temp->gpa<<endl;
        temp=temp->next;
    }
    cout<<"ID="<<temp->studentId<<", Name="<<temp->name<<", GPA="<<temp->gpa<<endl;


          }

void Linkedlist::searchStudentByID(int id){
    Lnode* temp = head;
    cout<<"Searching for student with id="<<id<<endl;
    while(temp->next!=nullptr){
        if (temp->studentId == id){
            cout<<"Student Found with ID="<<id;
        }
        temp=temp->next;
    }
    if (temp->studentId == id){
            cout<<"Student Found with ID="<<id<<endl;
        }
    }

void Linkedlist::updategpa(int id,float gpa){
    Lnode* temp = head;

    while(temp->next!=nullptr){
        if (temp->studentId == id){
            temp->gpa = gpa;
            cout<<"gpa updated for ID="<<id;
        }
        temp=temp->next;
    }
    if (temp->studentId == id){
            temp->gpa = gpa;
            cout<<"gpa updated for ID="<<id<<endl;
        }
    }
