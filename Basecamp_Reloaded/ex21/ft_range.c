/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:08:24 by matcardo          #+#    #+#             */
/*   Updated: 2022/04/01 21:33:23 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (max <= min)
	{
		return (NULL);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while ((min + i) < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
