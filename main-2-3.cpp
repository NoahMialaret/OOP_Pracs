#include <iostream>

extern int palindrome_sum(int[], int);

int main()
{
    int array[9] = {-1,4,5,10,-3,10,5,4,-1};

    std::cout << palindrome_sum(array, 9) << std::endl;

    return 0;
}