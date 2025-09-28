/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 09:45:24 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/14 10:49:02 by aalrousa         ###   ########.fr       */
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

void	print0(int num)
{
	if (num / 10 == 0)
		write(1, "0", 1);
	ft_putchar(num);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print0(x);
			write(1, " ", 1);
			print0(y);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
