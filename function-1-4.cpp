#include <iostream>

void print_scaled(int array[3][3],int scale)
{
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            std::cout << array[y][x] * scale << (x == 2 ? "" : " ");
        }

        std::cout << std::endl;
    }
}