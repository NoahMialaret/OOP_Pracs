#include <iostream>

extern int num_count(int[], int, int);

int main()
{
    int array[8] = {1,2,3,4,5};
    int number = 3;

    std::cout   << "The number of " << number << "s in the array is: " 
                << num_count(array, 8, number) << std::endl;

    return 0;
}