void first_verification_cup(int m[4][4], int cup[4], int cdown[4])
{
	int c;

	c = 0;
	while( c < 4)
	{
		if ( cup[c] != '\0')
		{
			if ( cup[c] == 4)
			{
				m[0][c] = 1;
				m[1][c] = 2;
				m[2][c] = 3;
				m[3][c] = 4;
			}
			if ( cup[c] == 1)
				m[0][c] = 4;
			if( cup[c] == 2 && cdown[c] == 3)
				m[1][c] = 4;
		}
		c++;
	}
	
}

void first_verification_cdown(int m[4][4], int cdown[4], int cup[4])
{
	int c;

	c = 0;
	while (c < 4)
	{
		if ( cdown[c] != '\0')
		{
			if ( cdown[c] == 4)
			{
				m[3][c] = 1;
				m[2][c] = 2;
				m[1][c] = 3;
				m[0][c] = 4;
			}
			if ( cdown[c] == 1)
				m[3][c] = 4;
			if( cdown[c] == 2 && cup[c] == 3)
				m[2][c] = 4;
			if(cdown[c] == 3 && m[0][c] == 3)
			{
				m[3][c] = 1;
				m[2][c] = 2;
			}
		}
		c++;
	}
}

void first_verification_rl(int	m[4][4], int rl[4], int rr[4])
{
	int r;

	r = 0;
	while( r < 4)
		{
			if ( rl[r] != '\0')
			{
				if ( rl[r] == 4)
				{
					m[r][0] = 1;
					m[r][1] = 2;
					m[r][2] = 3;
					m[r][3] = 4;
				}
				if ( rl[r] == 1)
				{
					m[r][0] = 4;
				}
				if (rl[r] == 2 && rr[r] == 3)
				{

					m[r][1] = 4;
				}
			}
			
			r++;
		}
	}


void first_verification_rr(int m[4][4], int rr[4], int rl[4])
{
	int r;

	r = 0;
	while(r < 4)
	{

		if ( rr[r] != '\0')
		{
			if ( rr[r] == 4)
			{
				m[r][3] = 1;
				m[r][2] = 2;
				m[r][1] = 3;
				m[r][0] = 4;
			}
			if ( rr[r] == 1)
			{
				m[r][3] = 4;
			}
			if (rr[r] == 2 && rl[r] == 3)
			{
				m[r][2] = 4;
			}

		}
		r++;
	}
}