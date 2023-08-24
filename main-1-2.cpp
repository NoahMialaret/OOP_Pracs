#include <iostream>

#include "MusicBox.h"
#include "StoreShelf.h"

int main()
{
    StoreShelf ss(5);

    MusicBox smallBox("smallSong", 1);
    MusicBox medBox("medSong", 2);
    MusicBox bigBox("bigSong", 3);

    std::cout << ss.add_music_box(smallBox) << std::endl;
    std::cout << ss.add_music_box(smallBox) << std::endl;
    std::cout << ss.add_music_box(bigBox) << std::endl;
    std::cout << ss.add_music_box(medBox) << std::endl;
    
    std::cout << "Num music moxes: " << ss.get_num_music_boxes() << std::endl;

    std::cout << "Width: " << ss.get_width() << std::endl;

    MusicBox* boxes = ss.get_contents();

    std::cout << boxes[1].get_song() << std::endl;

    return 0;
}