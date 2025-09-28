/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 11:19:59 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/13 11:40:30 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int ncolm, int nrow)
{
	int	cr;
	int	cc;

	cr = 0;
	while (cr < nrow)
	{
		cc = 0;
		while (cc < ncolm)
		{
			if (cc == 0 && (cr == 0 || cr == nrow - 1))
				ft_putchar('A');
			else if (cc == ncolm - 1 && (cr == 0 || cr == nrow - 1))
				ft_putchar('C');
			else if (cr == 0 || cr == nrow - 1 || cc == 0 || cc == ncolm - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cc++;
		}
		ft_putchar('\n');
		cr++;
	}
}
