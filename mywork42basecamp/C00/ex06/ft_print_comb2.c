/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:54:50 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/11 11:13:27 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_number(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 99)
	{
		while (n2 <= 99)
		{
			ft_put_number(n1);
			ft_putchar(' ');
			ft_put_number(n2);
			if (!(n1 == 98 && n2 == 99))
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
