#include <iostream>

extern int sum_diagonal(int[4][4]);

int main()
{
    int matrix[4][4] = {{5,0,0,0},{0,-5,0,0},{0,0,5,0},{0,0,0,-5}};

    std::cout   << "The sum of diagonal numbers is: " 
                << sum_diagonal(matrix) << std::endl;

    return 0;
}