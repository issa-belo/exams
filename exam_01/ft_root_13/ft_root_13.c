#include<unistd.h>
#include<stdio.h>

char	ft_root_13(char l)
{
	if((l >= 'a' && l <= 'm') || (l >= 'A' && l <= 'M'))
		l += 13;
	else if((l >= 'n' && l <= 'z') || (l >= 'N' && l >= 'Z'))
		l -= 13;
	return(l);
}

int	main(int ac, char **av)
{
	if(ac == 1)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(*av[1])
	{
		*av[1] = ft_root_13(*av[1]);
		write(1, av[1], 1);
		av[1]++;
	}	
	write(1, "\n", 1);
	return(0);
}
