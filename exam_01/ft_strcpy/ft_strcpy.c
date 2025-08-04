#include<unistd.h>
#include<stdio.h>
#include<string.h>

char    *ft_strcpy(char *s1, char *s2);
int	main(void)
{
	char src[] = "hi mom! i eally miss you";
	char dest[30];

	ft_strcpy(src, dest);

	printf("libFunc>> %s\n", strcpy(src, dest));

	int	i;
	i = 0;
	while(dest[i])
	{
		write(1, &dest[i++], 1);
		
	}
	write(1, "\n", 1);
	return(0);
}

char    *ft_strcpy(char *src, char *dest)
{
	while(*src)
	{
		*dest = *src;
		src++;
		dest++; // dest should have enuph memory to hold dest.
	}
	*dest = '\0'; // my ressponseablity to include terminating NULL'\0'.
	return(dest);
}

