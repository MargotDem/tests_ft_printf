#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	main(int argc, char **argv)
{
	char	*str;
	if (argc == 3)
	{
		str = ft_strjoin("%", argv[1]);
	}
	else
	{
		printf("usage: ./printf_output conversion_spec arg\n");
		return (1);
	}
	if (*argv[2] == 'f')
	{
		printf(str, atof(argv[2]));
	}
	else if (isnumber(*argv[2]))
	{
		printf(str, atoi(argv[2]));
	}
	else if (*argv[1] == 'c')
	{
		printf(str, *argv[2]);
	}
	else
	{
		printf(str, argv[2]);
	}
		printf("\n");
		printf("\n");
		printf("\n");
}
