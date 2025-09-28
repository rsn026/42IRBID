/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 10:14:40 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/21 11:20:20 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[j])
	{
		if (str[j] >= 'a' && str[j] <= 'z' && i == 1)
		{
			str[j] = str[j] - 32;
			i = 0;
		}
		else if (str[j] >= 'A' && str[j] <= 'Z' && i == 0)
			str[j] = str[j] + 32;
		else if (str[j] >= 'a' && str[j] <= 'z' && i == 0)
			i = 0;
		else if (str[j] >= 'A' && str[j] <= 'Z' && i == 1)
			i = 0;
		else if (str[j] >= '0' && str[j] <= '9')
			i = 0;
		else
			i = 1;
		j++;
	}
	return (str);
}
