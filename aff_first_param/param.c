#include	<unistd.h>

int	main(int ac, char **av)
{
	if(ac > 1)
	{
	int	len;
	len = 0;
		while(av[1][len] != '\0')
		{
		write(1, &av[1][len], 1);
		len++;
		}
	}	
	write(1, "\n", 1);
}
