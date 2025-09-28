/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 11:13:12 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/13 11:17:26 by aalrousa         ###   ########.fr       */
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
			if (cr == 0 && cc == 0)
				ft_putchar('/');
			else if ((cr == 0 && cc == ncolm - 1)
				|| (cr == nrow - 1 && cc == 0))
				ft_putchar('\\');
			else if (cr == nrow - 1 && cc == ncolm - 1)
				ft_putchar('/');
			else if (cr == 0 || cr == nrow - 1 || cc == 0 || cc == ncolm - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			cc++;
		}
		ft_putchar('\n');
		cr++;
	}
}
