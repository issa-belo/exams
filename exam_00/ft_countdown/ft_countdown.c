#include<unistd.h>

void	ft_countdown(void);
int	main(void)
{
	ft_countdown();
	return(0);
}

void	ft_countdown(void)
{
	char	i;
	
	i = '9';
	while(i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}
