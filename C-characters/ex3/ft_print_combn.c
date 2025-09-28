/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:10 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/14 15:21:47 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_buf(char *buf, int n)
{
	write(1, buf, n);
	if (buf[0] != '0' + (10 - n))
		write(1, ", ", 2);
}

void	rec_combn(int n, int pos, int start, char *buf)
{
	int	i;

	if (pos == n)
	{
		print_buf(buf, n);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		buf[pos] = '0' + i;
		rec_combn(n, pos + 1, i + 1, buf);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[10];

	if (n <= 0 || n >= 10)
		return ;
	rec_combn(n, 0, 0, buf);
}
