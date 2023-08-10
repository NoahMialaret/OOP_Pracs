#include <iostream>

extern int bin_to_int(int[], int);

int main()
{
    int array[10] = {1,1,0,0,0,1,1,0,0,0};

    std::cout << bin_to_int(array, 10) << std::endl;

    return 0;

    // 8 + 16 + 256 + 512 = 768 + 24
}