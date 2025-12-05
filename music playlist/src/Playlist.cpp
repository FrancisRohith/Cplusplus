#include "Playlist.h"
#include "Song.h"
#include <iostream>


using namespace std;
Playlist::Playlist()
{
    this->head = nullptr;
}
Playlist::~Playlist(){}

void Playlist::addSong(string name,float dur){
    Song* A = new Song(name,dur);
    if (head==nullptr){
        head = A;

    }else{
        Song* temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next = A;

        A->previous = temp;
        }
    }
void Playlist::displayfromStart(){
    Song* temp = head;
    cout<<"Displaying from start:"<<endl;
    while(temp->next!=nullptr){
        cout<<temp->name<<endl;
        temp=temp->next;
    }
    cout<<temp->name<<endl;
}
void Playlist::displayfromEnd(){
    Song* temp = head;
    cout<<"Displaying from end:"<<endl;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    while(temp->previous!=nullptr){
        cout<<temp->name<<endl;
        temp=temp->previous;
    }
    cout<<temp->name<<endl;
    }
