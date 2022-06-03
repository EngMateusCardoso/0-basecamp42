/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcardo <matcardo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:57:25 by matcardo          #+#    #+#             */
/*   Updated: 2022/03/31 16:38:08 by matcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		ft_putchar(*(str + count));
		count++;
	}
}

int	main(int argc, char *argv[])
{
	int	count;

	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count++;
	}
	if (argc < 1)
		return (0);
	return (0);
}
