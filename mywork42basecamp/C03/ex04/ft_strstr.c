/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:19:52 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/16 22:16:52 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
			if (!(to_find[j]))
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
