#include <iostream>
#include "RailwayReservationSystem.h"
using namespace std;

int main()
{
    RailwayReservationSystem* system = new RailwayReservationSystem;
    system->book_ticket("101");
    system->book_ticket("102");
    system->book_ticket("103");
    system->book_ticket("104");
    system->book_ticket("105");
    system->book_ticket("106");
    system->view_waiting_list();

    system->cancel_ticket();
    system->cancel_ticket();
    system->view_waiting_list();
    delete system;
    return 0;
}
