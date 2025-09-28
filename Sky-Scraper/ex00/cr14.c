/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_rl14.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:47:53 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/20 09:48:49 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_up(int arr[4][4], char *str)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (str[i] == '4')
		{
			arr[0][i] = 1;
			arr[1][i] = 2;
			arr[2][i] = 3;
			arr[3][i] = 4;
		}
		else if (str[i] == '1')
			arr[0][i] = 4;
		i++;
	}
}

void	col_down(int arr[4][4], char *str)
{
	int	i;
	int	col;

	i = 4;
	while (i < 8)
	{
		col = i - 4;
		if (str[i] == '4')
		{
			arr[0][col] = 4;
			arr[1][col] = 3;
			arr[2][col] = 2;
			arr[3][col] = 1;
		}
		else if (str[i] == '1')
			arr[3][col] = 4;
		i++;
	}
}

void	row_left(int arr[4][4], char *str)
{
	int	i;
	int	row;

	i = 8;
	while (i < 12)
	{
		row = i - 8;
		if (str[i] == '4')
		{
			arr[row][0] = 1;
			arr[row][1] = 2;
			arr[row][2] = 3;
			arr[row][3] = 4;
		}
		else if (str[i] == '1')
			arr[row][0] = 4;
		i++;
	}
}

void	row_right(int arr[4][4], char *str)
{
	int	i;
	int	row;

	i = 12;
	while (i < 16)
	{
		row = i - 12;
		if (str[i] == '4')
		{
			arr[row][0] = 4;
			arr[row][1] = 3;
			arr[row][2] = 2;
			arr[row][3] = 1;
		}
		else if (str[i] == '1')
			arr[row][3] = 4;
		i++;
	}
}
