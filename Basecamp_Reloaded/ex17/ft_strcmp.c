/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:45:15 by matcardo          #+#    #+#             */
/*   Updated: 2022/03/29 21:46:01 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	diff;

	count = 0;
	diff = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] != s2[count])
		{
			diff = s1[count] - s2[count];
			break ;
		}
		count++;
	}
	return (diff);
}
