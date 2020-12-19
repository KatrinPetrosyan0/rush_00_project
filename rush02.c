/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 03:11:06 by kpetrosy          #+#    #+#             */
/*   Updated: 2020/12/03 16:10:28 by kpetrosy         ###   ########.fr       */
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
				ft_putchar('A');
			else if ((i == h - 1 && j == 0) || (i == h - 1 && j == w - 1))
				ft_putchar('C');
			else if (i != 0 && i != h - 1 && j != 0 && j != w - 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
