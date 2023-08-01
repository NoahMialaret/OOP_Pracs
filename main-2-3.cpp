#include <iostream>

extern int sum_if_palindrome(int[], int);

int main()
{
    int array[4] = {-12,3,3,-12};

    std::cout << sum_if_palindrome(array, 4) << std::endl;

    return 0;
}
