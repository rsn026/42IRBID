/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 10:06:17 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/27 14:02:20 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	conv(char *c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (c[i] >= '0' && c[i] <= '9')
	{
		num = num * 10 + (c[i] - 48);
		i++;
	}
	return (num);
}

void	print(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
}
