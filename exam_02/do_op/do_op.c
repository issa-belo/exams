#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	main(int argc, char **argv)
{
	long	v1;
	long	v2;
	long	n;

	
	if(argc == 4)
	{
		v1 = atoi(argv[1]);
		v2 = atoi(argv[3]);

		if(*argv[2] == '+')
			n = v1 + v2;
		else if(*argv[2] == '-')
			n = v1 - v2;
		else if(*argv[2] == '*')
			n = v1 * v2;
		else if(*argv[2] == '/')
			n = v1 / v2;
		else if(*argv[2] == '%')
			n = v1 % v2;
		if(n >= -2147483648 && n <= 2147483647)	
			printf("%d\n", (int)n);
		}
	return(0);
}
