#include<unistd.h>
#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	one;

	i = 0;
	one = 0;
	sign = 1;

	while((str[i] == '\t') || (str[i] == ' ') || (str[i] == '\f')
	|| (str[i] == '\n') || (str[i] == '\r' || ( str[i] == '\v')))
		i++;
	
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		one = one * 10 + (str[i] - '0');
		i++;
	}
	return(sign * one);
}

int	main(void)
{
	char str[] = "	 \t\n\f+5123abc"; //-123
	printf("%d\n", ft_atoi(str));
}
