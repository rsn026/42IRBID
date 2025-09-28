/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:43:03 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/27 14:50:48 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(char *s);

char	*g_num019[] = {"zero", "one", "two", "three", "four",
	"five", "six", "seven", "eight", "nine", "ten",
	"eleven", "twelve", "thirteen", "fourteen", "fifteen",
	"sixteen", "seventeen", "eighteen", "ninetten"};
char	*g_num_ty[] = {"", "", "twenty", "thirty", "forty",
	"fifty", "sixty", "seventy", "eighty", "ninety"};

void	num099(int num)
{
	if (num < 20)
	{
		print(g_num019[num]);
		return ;
	}
	if (num >= 20 && num <= 99)
	{
		print(g_num_ty[num / 10]);
		if (num % 10 != 0)
		{
			print(" ");
			print(g_num019[num % 10]);
		}
	}
}

void	num999(int num)
{
	if (num == 1000)
		print("one thousand");
	if (num >= 100 && num <= 999)
	{
		print(g_num019[num / 100]);
		print(" hundred");
		if (num % 100 != 0)
		{
			print(" ");
			num = num % 100;
			if (num < 20)
				print(g_num019[num]);
			else
			{
				print(g_num_ty[num / 10]);
				if (num % 10 != 0)
				{
					print(" ");
					print(g_num019[num % 10]);
				}
			}
		}
	}
}
