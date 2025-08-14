#include<unistd.h>
#include<stdlib.h>

void	ft_putnbr_base(int nbr, char *base);
int	doubleChar(char *symbles);
void	ft_putchar(char c);
void	printNbr(int n, int baseValue, char *symbles);

int	main(int argc, char **argv)
{
	int	n;
	char	*baseSymbles;

	n = atoi(argv[1]);
	baseSymbles = argv[2];

	ft_putnbr_base(n, baseSymbles);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baseValue;

	baseValue = 0; 
	while(base[baseValue])
	{
		if(base[baseValue] == '+' || base[baseValue] == '-')
			return ;
		baseValue++;	
	}
	if(baseValue < 2)
		return ;
	if(doubleChar(base))
		return ;	
	printNbr(nbr, baseValue, base);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// dev&modlRecursv |42|     |10|      	     |"01"|
void	printNbr(int n, int baseValue, char *symbles)
{
	long	nlong;
	
	nlong = n;
	if(nlong < 0)
	{
		nlong = -nlong;
		ft_putchar('-');
	}
	if(nlong >= baseValue)
		printNbr(nlong / baseValue, baseValue, symbles);
	ft_putchar(symbles[nlong % baseValue]);	
}

//search for doubles symbols
int	doubleChar(char *symbles)
{
	int	i;
	int	j;

	i = 0;
	while(symbles[i])
	{
		j = i + 1;
		while(symbles[j])
		{
			if(symbles[i] == symbles[j])
				return(1);
			j++;
		}
	i++;
	}	
	return(0);
}
