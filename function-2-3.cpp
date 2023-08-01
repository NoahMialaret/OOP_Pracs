bool is_palindrome(int integers[], int length)
{
    if (length < 1)
    {
        return false;
    }

    for(int s = 0, e = length - 1; s < e; s++, e--)
    {
        if (integers[s] != integers[e])
        {
            return false;
        }
    }

    return true;
}

int sum_array_elements(int integers[], int length)
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

int sum_if_palindrom(int integers[], int length)
{
    if (length < 1)
    {
        return -1;
    }

    if (is_palindrome(integers, length))
    {
        return sum_array_elements(integers, length);
    }

    return -2;
}