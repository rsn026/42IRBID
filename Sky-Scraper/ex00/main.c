/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 12:12:43 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/20 15:12:43 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	col_up(int arr[4][4], char *str);
void	col_down(int arr[4][4], char *str);
void	row_left(int arr[4][4], char *str);
void	row_right(int arr[4][4], char *str);
void	u_d(int arr[4][4], char *str);
void	l_r(int arr[4][4], char *str);
int	vrfyin(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	ft_putchar((n % 10) + '0');
	ft_putchar(' ');
}

int	main(void)
{
	char	input[16] = {'4', '3', '2', '1', '1', '2', '2', '2', '4', '3', '2', '1', '1', '2', '2', '2'};
	int	arr[4][4];
	int	i;
	int	j;

	col_up(arr, input);
	col_down(arr, input);
	row_left(arr, input);
	row_right(arr, input);
	u_d(arr, input);
	l_r(arr, input);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
