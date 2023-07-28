int sum_diagonal(int matrix[4][4])
{
    int sum = 0;

    for(int i = 0; i < 4; i++)
    {
        sum += matrix[i][i];
    }

    return sum;
}