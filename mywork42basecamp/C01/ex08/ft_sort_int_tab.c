/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:52:25 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/14 16:52:43 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	ind_min;
	int	temp;

	i = 0;
	size--;
	while (i <= size)
	{
		ind_min = i;
		j = i;
		temp = tab[i];
		while (j <= size)
		{
			if (tab[ind_min] >= tab[j])
			{
				ind_min = j;
			}
			j++;
		}
		tab[i] = tab[ind_min];
		tab[ind_min] = temp;
		i++;
	}
}
