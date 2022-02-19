#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_count_base(int n, int base)
{
	while (n > 1 )
	{
		base = base * 10;
		n--;
	}
	return base;
}

/* void ft_putnbr(int nb)
{
 	while (base >= 9)
	{
		printf("%d", base);
 		n = nb/base;
		ft_putchar(n +'0');
		nb = nb - base * n ;
		base = base/10; 
		base = base/10;
	} 
} */

void ft_print_combn(int n)
{
	int base;
	int firstnumber;
	int firstCaractere;
	int num;
	int i;
	int b;

	base = 1;
	base = ft_count_base(n, base);// pega a base ex n=3->100, n=4->1000

	//pega o primeiro numero.
	b = base/10;
	i = 1;
	firstnumber = 0;
	while (i<n)
	{
		firstnumber = firstnumber + b*i;
		b = b/10;
		i++;
	}

	num = firstnumber;
	firstCaractere = 0;
	while (firstCaractere < (11 - n)) //Vai passar por todos meus numeros até o ultimo
	{
		if ()
		printf("%d ", num);// depois fazer função para printar sempre com 3 algarismos
		num++;
		firstCaractere = num/base;
	}
}

int main()
{
	ft_print_combn(3);
	return (0);
}