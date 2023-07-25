#include <iostream>

extern int max_element(int[], int);

int main()
{
    int array[5] = {1,1000,10,1001,5};

    std::cout   << "The biggest number in the array is: " 
                << max_element(array, 5) << std::endl;

    return 0;
}