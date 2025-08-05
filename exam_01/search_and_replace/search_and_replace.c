#include<unistd.h>

int	main(int ac, char **av)
{
	if(ac != 4) //argument should be only three.
	{
		write(1, "\n", 1);
		return(0);
	}

	if(av[2][1] != '\0' || av[3][1] != '\0') //second and therd argument must be single letter.
	{
		write(1, "\n", 1);
		return(0);
	}
	
	int	i;

	i = 0;
	while(av[1][i])
	{
		if(av[1][i] == av[2][0]) 
		{
			av[1][i] = av[3][0]; //search and replace.
		}
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}
