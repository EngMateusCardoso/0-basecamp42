/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:02:27 by matcardo          #+#    #+#             */
/*   Updated: 2022/02/17 14:39:16 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	proces_spaces_signs(char *str, int *sign_ptr)
{
	int	i;
	int	flag_no_more_space;

	i = 0;
	flag_no_more_space = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]) && !flag_no_more_space)
			i++;
		else
		{
			flag_no_more_space = 1;
			if (str[i] == '+' || str[i] == '-')
			{
				if (str[i++] == '-')
					*sign_ptr *= (-1);
			}
			else
			{
				return (i);
			}
		}
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	start_num;
	int	sign;
	int	*sign_ptr;
	int	result;

	sign = 1;
	sign_ptr = &sign;
	start_num = proces_spaces_signs(str, sign_ptr);
	result = 0;
	if (!(str[start_num] >= '0' && str[start_num] <= '9'))
		return (0);
	while (str[start_num] >= '0' && str[start_num] <= '9')
	{
		result *= 10;
		result += str[start_num] - 48;
		start_num++;
	}
	return (result * sign);
}
