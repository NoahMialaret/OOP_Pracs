#include <iostream>

void print_summed(int array1[3][3],int array2[3][3])
{
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            std::cout << array1[y][x] + array2[y][x] << (x == 2 ? "" : " ");
        }

        std::cout << std::endl;
    }
}