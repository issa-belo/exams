#include<unistd.h>
#include<stdio.h>

int	ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	main(int ac, char **av)
{
	int	i;
	if(ac == 1)
	{
		write(1, "\n", 1);
	}
	i = ft_rev_print(av[1]); //asgin the function to an int then the int --; 
	while(i--)
	{
		write(1, &av[1][i], 1);// here im printing argument one at`i`
	}	
	write(1, "\n", 1);
	return(0);
}
