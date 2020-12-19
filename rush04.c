/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:03:39 by kpetrosy          #+#    #+#             */
/*   Updated: 2020/11/29 22:21:46 by kpetrosy         ###   ########.fr       */
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
				ft_putchar('A');
			else if ((j == y && i == 1) || (j == 1 && i == x))
				ft_putchar('C');
			else if ((i != 1 && i != x) && (j != 1 && j != y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
