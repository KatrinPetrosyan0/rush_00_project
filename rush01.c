/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:56:08 by kpetrosy          #+#    #+#             */
/*   Updated: 2020/11/29 22:20:45 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y && x > 0)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y && x != 1 && y != 1))
				ft_putchar('/');
			else if ((j == y && i == 1) || (j == 1 && i == x))
				ft_putchar('\\');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
