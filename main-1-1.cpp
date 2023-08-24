#include <iostream>

#include "MusicBox.h"

int main()
{
    MusicBox ms("TestSong", 5);

    std::cout << "Song name is: " << ms.get_song() << std::endl;
    std::cout << "Width is: " << ms.get_width() << std::endl;

    {
        MusicBox msNull;

        std::cout << "Song name (null) is: " << msNull.get_song() << std::endl;
        std::cout << "Width (null) is: " << msNull.get_width() << std::endl;
    }

    return 0;
}