/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:31:29 by kpetrosy          #+#    #+#             */
/*   Updated: 2020/11/29 22:21:23 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((i == 0 && j == 0) || (i == h - 1 && j == 0))
				ft_putchar('A');
			else if ((i == 0 && j == w - 1) || (i == h - 1 && j == w - 1))
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
