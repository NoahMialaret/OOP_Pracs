int binary_to_int(int binary_digits[], int n)
{
    int decimal_num = 0;
    int cur_multiplier = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        decimal_num += cur_multiplier * binary_digits[i];
        
        cur_multiplier *= 2;
    }

    return decimal_num;
}