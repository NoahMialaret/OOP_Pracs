#include <iostream>

extern int count_evens(int);

int main()
{
    int upper_end = 5;

    std::cout   << "The number of evens between 1 and " << upper_end << " is: "
                << count_evens(upper_end) << std::endl;

    return 0;
}