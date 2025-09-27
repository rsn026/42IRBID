/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:13:21 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/27 18:37:58 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	length;

	i = 0;
	if (min >= max)
		return (0);
	length = max - min;
	arr = malloc(length * sizeof(int));
	while (i < length)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
