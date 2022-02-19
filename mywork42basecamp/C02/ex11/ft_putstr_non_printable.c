/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 06:22:42 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/16 07:22:25 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alg_hex_char(int i)
{
	if (i == 10)
		ft_putchar('a');
	else if (i == 11)
		ft_putchar('b');
	else if (i == 12)
		ft_putchar('c');
	else if (i == 13)
		ft_putchar('d');
	else if (i == 14)
		ft_putchar('e');
	else if (i == 15)
		ft_putchar('f');
}

void	ft_alg_hex(char i)
{
	if (i == 0)
		ft_putchar('0');
	else if (i == 1)
		ft_putchar('1');
	else if (i == 2)
		ft_putchar('2');
	else if (i == 3)
		ft_putchar('3');
	else if (i == 4)
		ft_putchar('4');
	else if (i == 5)
		ft_putchar('5');
	else if (i == 6)
		ft_putchar('6');
	else if (i == 7)
		ft_putchar('7');
	else if (i == 8)
		ft_putchar('8');
	else if (i == 9)
		ft_putchar('9');
	else
		ft_alg_hex_char(i);
}

void	ft_hex(char c)
{
	int	div;
	int	mod;

	div = c / 16;
	mod = c % 16;
	ft_alg_hex(div);
	ft_alg_hex(mod);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
