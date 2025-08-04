#include<unistd.h>

void	ft_printAlpha(void);
int	main(void)
{
	ft_printAlpha();
}

void	ft_printAlpha(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
	write(1, "\n", 1);
}
