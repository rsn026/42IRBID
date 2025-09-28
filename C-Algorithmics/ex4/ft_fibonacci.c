/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:07:43 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/16 12:25:45 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	b = 1;
	tmp = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	while (index > 1)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		index--;
	}
	return (b);
}
