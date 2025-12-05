#include <iostream>
#include "Playlist.h"
#include "Song.h"
using namespace std;

int main()
{
    Playlist *A = new Playlist();
    A->addSong("Song A",3.5);
    A->addSong("Song B",4.2);
    A->addSong("Song c",4.5);
     A->displayfromStart();
     A->displayfromEnd();
    return 0;
}
