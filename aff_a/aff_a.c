#include	<unistd.h>

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	len;
		len = 0;
		while(av[1][len] != '\0')
		{
			if(av[1][len] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			len++;
		}
	}
	else
	{
		write(1, "a", 1);
	}
	write(1, "\n", 1);
}
