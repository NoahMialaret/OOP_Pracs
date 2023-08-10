int sum_integers(int integers[], int length)
{
    if (length < 1)
    {
        return -1;
    }

    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += integers[i];
    }

    return sum;
}

bool is_array_palindrome(int integers[], int length)
{
    if (length < 1)
    {
        return false;
    }

    for (int s = 0, e = length - 1; s < e; s++, e--)
    {
        if (integers[s] != integers[e])
        {
            return false;
        }
    }

    return true;
}

int palindrome_sum(int integers[], int length)
{
    if (length < 1)
    {
        return -1;
    }

    return is_array_palindrome(integers, length) ? sum_integers(integers, length) : -2;
}