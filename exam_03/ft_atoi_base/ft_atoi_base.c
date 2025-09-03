#include<stdlib.h>
#include<stdio.h>

int	ft_isWhiteSpase(char const c)
{
	if((c >= 9 && c <= 13) || (c == 127) || (c == ' '))
		return(1);
	return(0);	
}
int	base(int c, int base)
{
	int	i;
	char str[] = "0123456789abcdef";
	char str2[] = "0123456789ABCDEF";

	i = 0;
	while(i < base)
	{
		if(c == str[i] || c == str2[i])
			return(i);
		i++;	
	}
	return(-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int	nb;
	int	negatif;
	int	i;

	i = 0;
	nb = 0;
	negatif = 0;
	while(ft_isWhiteSpase(str[i]))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			negatif = 1;
		i++;	
	}
	while(base(str[i], str_base) != -1)
	{
		nb = nb * str_base;
		nb = nb + base(str[i], str_base);
		i++;
	}
	if(negatif)
		return(-nb);
	return(nb);	
}
int	main(int ac, char **av)
{
	int	nb;
	if(ac >= 3)
	{
		nb = ft_atoi_base(av[1], atoi(av[2]));
		printf("%d\n", nb);
	}
	return(0);
}
