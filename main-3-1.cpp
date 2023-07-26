#include <iostream>

extern bool is_fanarray(int[], int);

int main()
{
    int array[5] = {1,2,3,4,5};

    std::cout   << "Is the array a fan array? " 
                << (is_fanarray(array, 5) ? "Yes." : "No.") << std::endl;

    return 0;
}