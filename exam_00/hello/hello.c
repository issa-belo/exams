#include<unistd.h>

void	ft_hello(void);
int	main(void)
{
	ft_hello();
	return(0);
}

void	ft_hello(void)
{
	write(1, "Hello, World!\n", 14);
}
