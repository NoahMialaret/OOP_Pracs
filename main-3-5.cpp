#include <iostream>

extern double sum_even(double[], int);

int main()
{
    double array[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout   << "The sum of elements in even positions is: " 
                << sum_even(array, 5) << std::endl;

    return 0;
}