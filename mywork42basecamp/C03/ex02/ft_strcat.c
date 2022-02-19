/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:47:19 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/16 22:18:02 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	i = 0;
	len = ft_str_len(dest);
	while (src[i])
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
