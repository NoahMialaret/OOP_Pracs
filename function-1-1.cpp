#include <iostream>

void print_matrix(int array[10][10])
{
    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            std::cout << array[y][x] << (x == 9 ? "" : " ");
        }

        std::cout << std::endl;
    }
}