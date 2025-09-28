/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:30:50 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/14 09:37:01 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	if (n >= 10)
		ft_putchar(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

void	testloop(int x, int i)
{
	int	c;

	c = x + i * 11;
	while (c % 10 != 0)
	{
		if (x / 100 == 0)
		{
			ft_putchar(0);
		}
		ft_putchar(c);
		if (c < 789)
			write(1, ", ", 2);
		c += 1;
	}
}

void	ft_print_comb(void)
{
	int	y;
	int	x;
	int	i;

	y = 8;
	x = 12;
	while (y > 0)
	{
		i = 0;
		while (i <= y)
		{
			testloop(x, i);
			i++;
		}
		y -= 1;
		x += 111;
	}
}
