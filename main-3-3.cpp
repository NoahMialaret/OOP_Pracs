#include <iostream>

extern double weighted_average(int[], int);

int main()
{
    int array[5] = {1,2,3,4,5};

    std::cout   << "The weighted average of the array is: " 
                << weighted_average(array, 5) << std::endl;

    return 0;
}