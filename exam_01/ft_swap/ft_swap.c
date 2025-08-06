#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int x = 42;
	int y = 24;
	printf("befor-> a%i a%i\n", x, y);
	ft_swap(&x, &y);
	printf("aftre-> a%i a%i\n", x, y);
}
