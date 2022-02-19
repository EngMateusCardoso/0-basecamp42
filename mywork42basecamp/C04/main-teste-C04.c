#include <stdio.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"

int	main()
{
	printf("\n---- ft_strlen --- ex00:\n");
	//entradas
	char *str1 = "vai passar!";
	char *str2 = "eu não vou dormir em cima do teclç$n@256+-.";
	char *str3 = "1234567";
	char *str4 = "";
	int x;
	x = ft_strlen(str1);
	printf("1 - %s: %d\n", str1, x);
	x = ft_strlen(str2);
	printf("2 - %s: %d\n", str2, x);
	x = ft_strlen(str3);
	printf("3 - %s: %d\n", str3, x);
	x = ft_strlen(str4);
	printf("4 - %s: %d\n", str4, x);
	//--------------------------------------------------
	printf("\n---- ft_putstr --- ex01:\n");
	ft_putstr(str1);
	printf("\n");
	ft_putstr(str2);
	printf("\n");
	ft_putstr(str3);
	printf("\n");
	ft_putstr(str4);
	//--------------------------------------------------
	printf("\n---- ft_putnbr --- ex02:\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(2);
	printf("\n");
	ft_putnbr(-2);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-0);
	printf("\n");
	//--------------------------------------------------
	printf("\n---- ft_atoi --- ex03:\n");
	printf("1 - tem que ser : -1234, é : %d\n", ft_atoi(" ---+--+1234ab567"));
	printf("2 - tem que ser : 1234, é : %d\n", ft_atoi(" --+--+1234ab567"));
	printf("3 - tem que ser : -1234, é : %d\n", ft_atoi("---+--+1234ab567"));
	printf("4 - tem que ser : 1234, é : %d\n", ft_atoi("   1234ab567"));
	printf("5 - tem que ser : 1234, é : %d\n", ft_atoi("1234ab567"));
	printf("6 - tem que ser : 0, é : %d\n", ft_atoi(" ---+--+ 1234ab567"));
	printf("7 - tem que ser : -1234, é : %d\n", ft_atoi(" ---+--+1234+b567"));
	printf("8 - tem que ser : 0, é : %d\n", ft_atoi(" ---+--+A1234+b567"));
	printf("9 - tem que ser : 0, é : %d\n", ft_atoi("A"));
	printf("10 - tem que ser : 0, é : %d\n", ft_atoi("-0"));
	printf("11 - tem que ser : -2147483648, é : %d\n", ft_atoi("-2147483648"));
	printf("12 - tem que ser : 2147483647, é : %d\n", ft_atoi("2147483647"));
}
