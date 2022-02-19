/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:17:43 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/09 19:27:28 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnumber(char n1, char n2, char n3)
{
	while (n1 <= '7')
	{
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(n3);
		if (n3 < '9')
			n3++;
		else if (n2 < '8')
		{
			n3 = ++n2;
			n3++;
		}
		else
		{
			n2 = ++n1;
			n3 = ++n2;
			n3++;
		}
		if (n1 != '8')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	ft_putnumber(n1, n2, n3);
}
