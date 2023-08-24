#include "StoreShelf.h"

StoreShelf::StoreShelf()
    :
    maxWidth(0)
{
    musicBoxes = new MusicBox[0];
}

StoreShelf::StoreShelf(int width)
    :
    maxWidth(width)
{
    musicBoxes = new MusicBox[width];
}

int StoreShelf::get_width()
{
    return maxWidth;
}

int StoreShelf::get_num_music_boxes()
{
    return numMusicBoxes;
}

MusicBox* StoreShelf::get_contents()
{
    return musicBoxes;
}

bool StoreShelf::add_music_box(MusicBox a_music_box)
{
    if (combinedWidth + a_music_box.get_width() > maxWidth)
    {
        return false;
    }

    musicBoxes[numMusicBoxes] = a_music_box;
    numMusicBoxes++;
    combinedWidth += a_music_box.get_width();

    return true;
}
 
StoreShelf::~StoreShelf()
{
    delete[] musicBoxes;
}