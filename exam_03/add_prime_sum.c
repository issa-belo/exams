#include<unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	if(str[i] == '-')
		return(0);
	while(str[i])
	{
		if(!(str[i] >= 48 && str[i] <= 57))
			return(0);
		nbr = nbr * 10;
		nbr = nbr + (str[i] - 48);
		i++;
	}
	return(nbr);
}
void	ft_putnbr(int nbr)
{
	if(nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		nbr = nbr + 48;
		write(1, &nbr, 1);
	}
}
int	ft_is_prime(int nbr)
{
	int	i;

	i = 2;
	while(i < nbr)
	{
		if(nbr % i == 0)
			return(0);
		i++;	
	}
	return(1);
}

void	add_prime_sum(int nbr)
{
	int	i;
	int	count;

	i = 2;
	count = 0;
	while(i <= nbr)
	{
		if(ft_is_prime(i))
			count = count + i;
		i++;	
	}
	ft_putnbr(count);
}

int	main(int ac, char **av)
{
	char	zero;
	char	rtn;

	zero = '0';
	rtn = '\n';
	if(ac == 2)
	{
		add_prime_sum(ft_atoi(av[1]));
	}
	else
	{
		write(1, &zero, 1);
	}
	write(1, &rtn, 1);
	return(0);
}
