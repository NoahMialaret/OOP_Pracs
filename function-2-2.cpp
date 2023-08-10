#include <math.h>

int bin_to_int(int binary_digits[], int number_of_digits)
{
    if (number_of_digits < 1)
    {
        return 0;
    }

    int num = 0;

    for (int i = 0; i < number_of_digits; i++)
    {
        num += binary_digits[i] * pow(2.0, (double)(number_of_digits - i - 1));
    }

    return num;
}