#include <iostream>

extern bool is_descending(int[], int);

int main()
{
    int array[5] = {1,2,3,4,5};

    std::cout   << "Is the array in descending order? " 
                << (is_descending(array, 5) ? "Yes" : "No") << std::endl;

    return 0;
}