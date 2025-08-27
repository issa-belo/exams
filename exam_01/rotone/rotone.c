#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_roteOne(char *l)
{
	while(*l)
	{
		if((*l >= 'a' && *l <= 'y') || (*l >= 'A' && *l <= 'Y'))
			ft_putchar(*l + 1);
		else if(*l == 'Z' || *l == 'z')
			ft_putchar(*l - 25);
		else
			ft_putchar(*l);
		++l;
	}	
}
int		main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_roteOne(av[1]); //the call is righte aftre the condition. 
	}
	ft_putchar('\n');
	return(0);
}
