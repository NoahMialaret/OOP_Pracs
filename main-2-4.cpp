#include <iostream>

extern int sum_min_max(int[], int);

int main()
{
    int array[4] = {1,2,3,4};

    std::cout << sum_min_max(array, 4) << std::endl;

    return 0;
}