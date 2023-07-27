#include <iostream>

// From Q2-4
bool is_ascending(int array[], int n)
{
    if (n < 1)
    {
        return false;
    }

    for (int i = 1; i < n; i++)
    {
        if (array[i - 1] > array[i])
        {
            return false;
        }
    }

    return true;
}

int median_array(int array[], int n)
{
    if (n < 1 || n % 2 == 0)
    {
        return 0;
    }

    // Output for debugging
    // std::cout << "This is the initial array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     std::cout << array[i] << " ";
    // }
    // std::cout << std::endl;

    while (!is_ascending(array, n))
    {
        //Rudenmentary sorting algorithm
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int tempNum = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tempNum;
            }
        }

    // Output for debugging
    // std::cout << "This is the array now: ";
    // for (int i = 0; i < n; i++)
    // {
    //     std::cout << array[i] << " ";
    // }
    // std::cout << std::endl;

    }

    return array[n / 2];
}
