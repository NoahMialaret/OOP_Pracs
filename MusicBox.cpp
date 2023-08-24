#include "MusicBox.h"

MusicBox::MusicBox()
    :
    songName(""),
    width(0)
{}

MusicBox::MusicBox(std::string songname, int width)
    :
    songName(songname),
    width(width)
{}

std::string MusicBox::get_song()
{
    return songName;
}

int MusicBox::get_width()
{
    return width;
}

MusicBox::~MusicBox()
{
    std::cout << "Destructor Called!" << std::endl;
}