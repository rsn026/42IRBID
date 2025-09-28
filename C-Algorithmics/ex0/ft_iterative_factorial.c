/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:20:18 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/16 12:21:01 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	n = 1;
	while (nb >= 1)
	{
		n = n * nb;
		nb--;
	}
	return (n);
}
