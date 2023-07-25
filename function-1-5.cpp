int count_evens(int number)
{
    if (number < 1)
    {
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            count += 1;
        }

        // Could also do:
        //count += (int)(i % 2 == 0);
    }

    // This also works
    //count = number / 2;

    return count;
}