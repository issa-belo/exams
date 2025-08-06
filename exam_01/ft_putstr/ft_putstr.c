#include<unistd.h>
#include<stdio.h>

/*void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
*/
void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

}
int	main(void)
{
	char *string = "androTate";
	ft_putstr(string);

	return(0);
}
