char 	*ft_strcap(char *str)
{
	int 	cap;

	cap = 0;
	while(*str != '\0')
	{
		if((*str < 'a' && *str > 'z')
			|| (*str < 'A' && *str > 'Z')
			|| (*str < '0' && *str > '9'))
		{
			cap = 0;
			while (*str < 'a' && *str > 'z')
			{
				str++;
			}
		}
		if (*str <= 'a' && *str >= 'z' && cap == 0)
			// *str += 32;
			*str = 'K';
		str++;
	}
	return (str);
}

#include <stdio.h>

char	*ft_strcap(char *str);

int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	char str2[] = "ALO MALUCO 42BELEZA!";
	char str3[] = "alo+ma|uco a2beleza!";
	char str4[] = "ALO+MALUCO*a2BELEZA!";
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

	printf("str1: %s\n", str1);
	ft_strcap(str1);
	printf("str1_c: %s\n\n", str1);
	printf("str2: %s\n", str2);
	ft_strcap(str2);
	printf("str2_c: %s\n\n", str2);
	printf("str3: %s\n", str3);
	ft_strcap(str3);
	printf("str3_c: %s\n", str3);
	printf("str4: %s\n\n", str4);
	ft_strcap(str4);
	printf("str4_c: %s\n\n", str4);
	printf("str5: %s\n", str5);
	ft_strcap(str5);
	printf("str5_c: %s\n\n", str5);
	printf("str6: %s\n", str6);
	ft_strcap(str6);
	printf("str6_c: %s\n\n", str6);
	return (0);
}
