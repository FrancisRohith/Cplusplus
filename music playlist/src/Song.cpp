#include "Song.h"

Song::Song(string name,float dur):name(name),dur(dur)
{
    this->next = nullptr;
    this->previous = nullptr;
}

Song::~Song(){}
