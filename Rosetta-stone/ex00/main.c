/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrousa <aalrousa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 10:24:12 by aalrousa          #+#    #+#             */
/*   Updated: 2025/09/27 14:57:13 by aalrousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		conv(char *c);
void	print(char *s);
void	num099(int num);
void	num999(int num);

int	main(int argc, char **argv)
{
	int	num;

	if (argc != 2)
		return (0);
	num = conv(argv[1]);
	if (num > 1000)
		print("number too big");
	if (argv[1][0] == 45)
	{
		print("Error\n");
		return (0);
	}
	num099(num);
	num999(num);
	print("\n");
	return (0);
}
