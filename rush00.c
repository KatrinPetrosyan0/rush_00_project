/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 02:34:28 by kpetrosy          #+#    #+#             */
/*   Updated: 2020/11/29 22:20:11 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int w, int h)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < h && w > 0)
	{
		while (j < w)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == w - 1))
				ft_putchar('o');
			else if ((i == h - 1 && j == 0) || (i == h - 1 && j == w - 1))
				ft_putchar('o');
			else if (i != 0 && i != h - 1 && j != 0 && j != w - 1)
				ft_putchar(' ');
			else
			{
				(i != 0 && i != h - 1) ? ft_putchar('|') : ft_putchar('-');
			}
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
