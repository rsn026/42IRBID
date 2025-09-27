/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:12:27 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/27 18:34:11 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*arr;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	arr = malloc(i * sizeof(char));
	if (!arr)
		return (NULL);
	while (j < i)
	{
		arr[j] = src[j];
		j++;
	}
	return (arr);
}
