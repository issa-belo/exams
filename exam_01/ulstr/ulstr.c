#include<unistd.h>

char	ft_converter(char l)
{
	if(l >= 'a' && l <= 'z')
		l -= 32;
	else if(l >= 'A' && l <= 'Z')
		l += 32;
	return(l); //if don't return l change will be just lucally. 	
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		while(*av[1])
		{
			*av[1] = ft_converter(*av[1]); // *av[i] should = the func(*av[1]).^.
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
