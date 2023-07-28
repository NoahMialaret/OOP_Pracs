int is_identity(int array[10][10])
{
    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            if ((x == y && array[y][x] != 1) || (x != y && array[y][x] != 0))
            {
                return 0;
            }
        }
    }

    return 1;
}