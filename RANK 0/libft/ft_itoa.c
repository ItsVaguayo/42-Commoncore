/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:18:01 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/22 12:56:41 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		i;
	long	cpy;

	i = 0;
	cpy = n;
	if (cpy < 0)
	{
		i++;
		cpy = -cpy;
	}
	while (cpy > 9)
	{
		cpy = cpy / 10;
		i++;
	}
	i++;
	return (i);
}

static char	*ft_convert_itoa(char *str, int n)
{
	if (n < 0)
	{
		*str++ = '-';
		n = -n;
	}
	if (n > 9)
		str = ft_convert_itoa(str, n / 10);
	*str++ = ((n % 10) + '0');
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ptr = ft_convert_itoa(str, n);
	*ptr = '\0';
	return (str);
}

/*int	main(void)
{
	int n = -120;
	char *str;

	str = ft_itoa(n);
	printf("%s\n", str);
	return (0);
}*/
