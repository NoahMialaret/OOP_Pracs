#include <iostream>

bool is_fanarray(int array[], int n)
{
    if (n < 1)
    {
        return false;
    }

    int prevNum = array[0];

    for (int s = 0, e = n -1; s <= e; s++, e--)
    {
        if (array[s] != array[e] || array[s] < prevNum)
        {
            return false;
        }
        prevNum = array[s];
    }

    return true;
}