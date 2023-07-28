#include <iostream>

void count_digits(int array[4][4])
{
    int numCount[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            int temp = array[y][x];
            if (temp < 10 && temp >= 0)
            {
                numCount[temp]++;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << ':' << numCount[i] << ';';
    }
    std::cout << std::endl;
}