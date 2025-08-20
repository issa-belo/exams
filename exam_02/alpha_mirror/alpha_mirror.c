#include<unistd.h>

void	alpha_mirror(char c)
{
	if(c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	else if(c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	if(ac == 1)
	{
		write(1, "\n", 1);
		return(0);
	}	
	int	i;

	i = 0;
	while(av[1][i])
		alpha_mirror(av[1][i++]);
	write(1, "\n", 1);
	return(0);
}
