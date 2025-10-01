#include <unistd.h>
int main(int ac, char **av)
{
	int	i = 0;
	char	conv ;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (av[1][i] > 'M')
					conv = av[1][i] - 13;
				else
					conv = av[1][i] +13;
				write(1, &conv,1);
			}
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
                        {
                                if (av[1][i] > 'm')
                                        conv = av[1][i] - 13;
                                else
                                        conv = av[1][i] +13;
				write(1,&conv,1);
                        }
			else
				write(1,&av[1][i],1);
			i++;
		}
		write(1, "\n",1);
	
	}
	else
		write(1, "\n", 1);
	return (0);
}
