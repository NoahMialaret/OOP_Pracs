#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number)
{
    int array[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int num = std::stoi(decimal_number);

    for (int i = 31; num != 0; i--)
    {
        array[i] = num % 2;
        num /= 2;
    }

    bool canPrint = false;

    for (int i = 0; i < 32; i++)
    {
        canPrint = array[i] == 1 ? true : canPrint;
        if (canPrint)
        {
            std::cout << array[i];
        }
    }

    std::cout << std::endl;
}
