#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main()
{
    int array1[5] = {1,2,3,4,5};
    int array2[5] = {1,2,3,4,5};

    std::cout   << "The sum of these two arrays is: " 
                << sum_two_arrays(array1, array2, 5) << std::endl;

    return 0;
}