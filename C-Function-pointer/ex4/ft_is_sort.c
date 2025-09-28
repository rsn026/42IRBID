/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:35:46 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/25 17:32:52 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	inc;
	int	dec;

	i = 0;
	inc = 1;
	dec = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			inc = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			dec = 0;
		i++;
	}
	return (inc || dec);
}
