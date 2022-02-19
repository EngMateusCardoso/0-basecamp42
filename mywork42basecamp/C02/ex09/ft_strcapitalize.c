/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:27:51 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/16 07:20:28 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if (flag == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] += -32;
			flag++;
		}
		else if (flag > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		else if ((str[i] < 48) || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || (str[i] > 122))
			flag = 0;
		else
			flag++;
		i++;
	}
	return (str);
}
