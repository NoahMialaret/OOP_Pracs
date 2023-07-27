#include <iostream>

// From 1-3
int num_count(int array[], int n, int number)
{
    if (n < 1)
    {
        return 0;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == number)
        {
            count++;
        }
    }

    return count;
}

double weighted_average(int array[], int n)
{
    double weightAv = 0.0;

    for (int i = 0; i < n; i++)
    {
        int numCount = num_count(array, n, array[i]);

        weightAv += ((double)array[i] * (double)numCount) / (double)n;
    }

    return weightAv;
}