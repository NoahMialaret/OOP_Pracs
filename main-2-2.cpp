#include <iostream>

extern int binary_to_int(int[], int);

int main()
{
    int array[30] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};

    std::cout << binary_to_int(array, 30) << std::endl;

    return 0;
}