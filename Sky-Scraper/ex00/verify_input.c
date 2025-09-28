/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vrfy_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:12:39 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/20 11:51:48 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	vrfyin(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
			count++;
		else if (str[i] != ' ' )
		{
			write(1, "Error", 5);
			return (0);
		}
		i++;
	}
	if (count != 16)
	{
		write(1, "Error", 5);
		return (0);
	}
}
