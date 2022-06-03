/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:35:47 by matcardo          #+#    #+#             */
/*   Updated: 2022/03/30 19:35:59 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb >= 1)
	{
		result *= nb--;
		if (result < 0)
			return (0);
	}
	if (nb < 0)
		return (0);
	return (result);
}
