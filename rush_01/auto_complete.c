
int    remove_sol(int *flag, int value, int sol_num)
{
    int    i;

    i = 0;
    while (i < 4)
    {
        if (flag[i] == value)
        {
            flag[i] = 0;
            sol_num--;
        }
        i++;
    }
    return (sol_num);
}

int    check_col (int matrix[4][4], int flag[4], int col, int sol)
{
    int    i;

    i = 0;
    while (i < 4)
    {
        if (matrix[i][col] != 0)
            sol = remove_sol(flag, matrix[i][col], sol);
        i++;
    }
    return (sol);
}

int    check_lin (int matrix[4][4], int flag[4], int lin, int sol)
{
    int    i;

    i = 0;
    while (i < 4)
    {
        if (matrix[lin][i] != 0)
            sol = remove_sol(flag, matrix[lin][i], sol);
        i++;
    }
    return (sol);
}

void    ft_options(int matrix[4][4], int lin, int col, int size)
{
    int	i;
    int	flag[4];
    int	sol;

    i = -1;
    sol = 4;
    while (i++ < 4)
        flag[i] = i + 1;
    sol = check_col (matrix, flag, col, sol);
    sol = check_lin (matrix, flag, lin, sol);
    i = 0;
    while (i < 4)
    {
        if (sol == 1 && flag[i] != 0)
        {
            matrix[lin][col] = flag[i];
        }
        i++;
    }
}

void    search_options(int matrix[4][4], int size)
{
    int    lin;
    int    col;

    lin = 0;
    while (lin < size)
    {
        col = 0;
        while (col < size)
        {
            if (matrix[lin][col] == 0)
            {
                ft_options(matrix, lin, col, size);
            }
            col++;
        }
        lin++;
    }
}
