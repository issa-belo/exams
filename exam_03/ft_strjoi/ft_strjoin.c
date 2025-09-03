#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i])
		i++;
	return(i);	
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}
char	*ft_strjoi(int size, char **strs, char *sep)
{
	int	total_len;
	//int	i;
	char	*result;

	//i = 0;
	total_len = 0;
	
	if(size == 0)
	{
		result = (char *)malloc(1);
		if(result)
			result[0] = '\0';
		return(result);
	}
		
		for(int i=0; i < size; i++)
			total_len += ft_strlen(strs[i]);
		total_len += ft_strlen(sep) * (size - 1);

		result = (char *)malloc(sizeof(char) * total_len + 1);

		if(!result)
			return NULL;
		result[0] = '\0';

		for(int i=0; i<size; i++)
		{	
			ft_strcat(result, strs[i]);
			if(i < size - 1)
				ft_strcat(result, sep);
		}
		return(result);
}

int	main(void)
{	char	*words[] = {"Hi", "bello!"};
	char	*separator = " , ";
	char	*result;
	
	result = ft_strjoi(2, words, separator);
	if(result)
	{
		printf("%s\n", result);
		free(result);
	}
	return(0);
}
