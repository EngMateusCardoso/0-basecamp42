/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:56:40 by matcardo          #+#    #+#             */
/*   Updated: 2022/03/31 16:14:37 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	lim;

	result = 1;
	lim = nb / result;
	while (result <= lim)
	{
		if (result * result == nb)
			return (result);
		lim = nb / ++result;
	}
	return (0);
}
