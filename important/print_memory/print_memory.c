#include<unistd.h>
#include<stdio.h>
#include<string.h>

typedef unsigned char byte_t;

void	ft_str_with_dotes(char *string, unsigned int size);
void	ft_str_in_hex(char *str, unsigned int size);
void	ft_printHex(byte_t Byte);
void	ft_print_addr_Byte(void *s);
void	*ft_print_memory(void *addr, unsigned int size);
void	ft_putchar(char c);

int	main()
{
	char *str = "print\t\f\v\r\n This";
	/*ft_print_addr_Byte(str);
	ft_str_in_hex(str);
	ft_str_with_dotes(str);*/
	ft_print_memory((void *)str, sizeof(str));
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if(size == 1)
		return(addr);
	ft_print_addr_Byte(addr);
	ft_str_in_hex(addr, size);
	ft_str_with_dotes(addr, size);
	return(addr);
}
void	ft_printHex(byte_t Byte)
{
	if((Byte / 16) < 10)
		ft_putchar(48 + (Byte / 16));
	else
		ft_putchar(87 + (Byte / 16));
	if((Byte % 16) < 10)
		ft_putchar(48 + (Byte % 16));
	else
		ft_putchar(87 + (Byte % 16));
}

void	ft_print_addr_Byte(void *s)
{
	byte_t	*ptrByte;
	int	i;
	
	ptrByte = (byte_t *)&s;
	i = 7;
	while(i >= 0)
	{
		ft_printHex(ptrByte[i]);
		i--;
	}
	ft_putchar(':');
}

void	ft_str_in_hex(char *str, unsigned int size)
{
	int	i;
	short	limit;

	limit = 16;
	i = 0;
	while(str[i] && limit--)
	{
		if(!(i % 2))
			ft_putchar(' ');
		ft_printHex(str[i]);
		i++;
	}
	ft_putchar(' ');
}

void	ft_str_with_dotes(char *string, unsigned int size)
{
	short	limit;
	int	i;
	
	limit = 16;
	size = strlen(string);
	i = 0;
	while(i < size && limit--)
	{
		if((string[i] < 32) || (string[i] == 127))
			ft_putchar('.');
		else	
			write(1, &string[i], 1);
		i++;	
	}
}

