
#include <iostream>

void two_five_nine(int array[], int n)
{
    int numTwo = 0;
    int numFive = 0;
    int numNine = 0;

    for (int i = 0; i < n; i++)
    {
        switch (array[i])
        {
            case 2:
                numTwo++;
                break;
            case 5:
                numFive++;
                break;
            case 9:
                numNine++;
                break;
            default:
                break;
        }
    }


    std::cout << "2:" << numTwo << ";5:" << numFive << ";9:" << numNine << ";" << std::endl;
}