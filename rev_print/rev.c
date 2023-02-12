#include	<unistd.h>

int	ft_strlen(char *str)
{
	int 	i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_rev_print(char *str)
{
	int	j;
	j = ft_strlen(str);
	j--;
	while(j >= 0)
	{
		write(1, &str[j], 1);
		j--;
	}
	write(1, "\n", 1);
	return(str);
}

int	main()
{
	char	dizi[] = "rumeysa";
	ft_rev_print(dizi);
}
