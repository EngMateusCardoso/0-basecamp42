/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:44:59 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/17 04:40:17 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

int	ft_countbase(int n, int base)
{
	while (n > 9 || n < -9)
	{
		base = base * 10;
		n = n / 10;
	}
	return (base);
}

void	ft_putnbr(int nb)
{
	int	n;
	int	base;

	n = nb;
	base = 1;
	base = ft_countbase(n, base);
	if (nb < 0)
	{
		ft_put_char('-');
		n = nb / base;
		n = n * (-1);
		ft_put_char(n + '0');
		nb = nb + base * n;
		base = base / 10;
		nb = nb * (-1);
	}
	while (base >= 1)
	{
		n = nb / base;
		ft_put_char(n + '0');
		nb = nb - base * n;
		base = base / 10;
	}
}
