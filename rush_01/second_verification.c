void ft_verification_1(int m[4][4], int cup[4], int cdown[4], int rl[4])
{
    int c;

    c = 4;
    while( c < 4)
    {
        if(cup[c] == 2 && m[3][c] == 4)
            m[0][c] = 3;
        if(cdown[c] == 2 && m[0][c] == 4)
            m[3][c] = 3;
        if(cdown[c] == 3 && m[0][c] == 3 && m[1][c] == 4)
        {
            m[3][c] = 1;
            m[2][c] = 2;
        }
        if(cdown[c] == 3 && m[0][c] == 4 && m[1][c] == 3)
        {
            m[3][c] = 2;
            m[2][c] = 1;
        }
        c++;
    }
}


void ft_verification_2(int m[4][4], int cup[4], int rl[4])
{
    int c;
    
    c = 0;
    while(c < 4)
    {
        if(cup[c] == 3 && m[3][c] == 4 && m[2][c] == 3)
        {
            m[0][c] = 2;
            m[1][c] = 1;
        }
        if(cup[c] == 3 && m[3][c] == 3 && m[2][c] == 4)
        {
            m[0][c] = 1;
            m[1][c] = 2;
        }
        if(rl[c] == 3 && m[c][3] == 4 && m[c][3] == 3)
        {
            m[c][0] = 2;
            m[c][1] = 1;
        }
        c++;
    }
}


void ft_verification_3(int m[4][4], int cdown[4],  int rl[4], int rr[4])
{
    int    c;
    
    c = 0;
    while(c < 4)
    {
        if(rl[c] == 3 && m[c][3] == 3 && m[2][3] == 4)
        {
            m[c][0] = 1;
            m[c][1] = 2;
        }
        if(rr[c] == 3 && m[c][0] == 3 && m[c][1] == 4)
        {
            m[c][3] = 1;
            m[c][2] = 2;
        }
        if(rr[c] == 3 && m[c][0] == 4 && m[c][1] == 3)
        {
            m[c][3] = 2;
            m[c][2] = 1;
        }
        if(rl[c] == 2 && m[c][3] == 4)
            m[c][0] = 3;
        if(rr[c] == 2 && m[c][0] == 4)
            m[c][3] = 3;
        c++;
    }
}

void ft_verification_4(int m[4][4], int cup[4], int cdown[4])
{
    int c;

    c = 0;
    while(c < 4)
    {
        if(cup[c] == 3 && m[0][c] == 2 && m[2][c] == 4)
        {
            m[1][c] = 3;
            m[3][c] = 1;
        }
        if(cdown[c] == 3 && m[3][c] == 2 && m[1][c] == 4)
        {
            m[2][c] = 2;
            m[0][c] = 1;
        }
        c++;
    }
    
}