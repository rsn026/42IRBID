/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:57:22 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/23 13:19:21 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new;
	int	i;

	new = malloc(length * sizeof(int));
	i = 0;
	if (new == NULL)
		return (0);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}
