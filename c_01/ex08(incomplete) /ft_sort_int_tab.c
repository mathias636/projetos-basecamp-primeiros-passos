void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	while(i < size)
	{
		j = (i + 1);
		if(tab[i] > tab[j])
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
		}
		i++;
		size--;
	}
}
