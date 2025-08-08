#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);	
}

char	*ft_strdup(char *src)
{
	char	*string;
	int	i;

	i = 0;
	string =(char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (string == NULL)
    		return NULL;

	while(*src)
		string[i++] = *src++;
	string[i] = '\0';
	return(string);
}

int	main(void)
{
	char *s = "string";
	s = ft_strdup(s);
	printf("%s\n", s);
	return(0);
}

