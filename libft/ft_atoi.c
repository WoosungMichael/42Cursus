#include "libft.h"

int	check(char c)
{
	if (c == ' ' || c == '\n')
		return (1);
	else if (c == '\t' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	    i;
	int	    flag;
	long	answer;

	i = 0;
	flag = 1;
	answer = 0;
	while (check(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			flag *= -1;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		answer *= 10;
		answer += str[i] - '0';
        if (answer > 2147483647 && flag == 1)
			return (-1);
		if (answer > 2147483648 && flag == -1)
			return (0);
		i++;
	}
	return (answer * flag);
}