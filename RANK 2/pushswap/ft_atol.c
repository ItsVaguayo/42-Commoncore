#include "pushswap.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	return (0);
}

long    ft_atol(const char *str)
{
	int		i;
	int     sign;
	long	res;

	i = 0;
    sign = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
    
    if ((res *= sign) > INT_MAX || (res *= sign) <= INT_MIN)
    {
        write(2, "Error\n", 6);
        exit(1);
    }
	return ((res * sign));
}