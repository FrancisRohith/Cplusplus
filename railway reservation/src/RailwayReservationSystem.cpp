#include "RailwayReservationSystem.h"

#include <iostream>
using namespace std;
RailwayReservationSystem::RailwayReservationSystem():availableseats(seats)
{}

RailwayReservationSystem::~RailwayReservationSystem()
{}

void RailwayReservationSystem::book_ticket(string name){
    if (availableseats>0){
        availableseats--;
        cout<<"Seats confirmed for "<<name<<endl;
    }else{
        waitingList.push(name);
        cout<<"train is full you are added to w list "<<endl;
    }
    }
void RailwayReservationSystem::cancel_ticket(){
    if (availableseats<seats){
        availableseats++;
        cout<<"ticket cancelled"<<endl;;

    if (!waitingList.isempty()){
        string next = waitingList.top();
        waitingList.pop();
        book_ticket(next);
    }
    }
    else{
        cout<<"no cancellation"<<endl;
    }
    }
void RailwayReservationSystem::view_waiting_list(){
    cout<<"WAITING LIST"<<endl;
    if (!waitingList.isempty()){
        cout<<waitingList.top()<<" "<<endl;;
    }
    }
