/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:43:21 by matcardo          #+#    #+#             */
/*   Updated: 2022/04/01 21:04:46 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*target;

	count = 0;
	while (*(src + count))
		count++;
	target = (char *)malloc(count * sizeof(char));
	count = 0;
	while (*(src + count))
	{
		target[count] = src[count];
		count++;
	}
	target[count] = src[count];
	return (target);
}
