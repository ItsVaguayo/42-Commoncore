/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 00:09:19 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/19 14:26:10 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	count_numbers(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
		i++;
	return (i);
}

long	*to_long_array(char **numbers, int size)
{
	long	*arr;
	int		i;

	arr = malloc(sizeof(long) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = ft_atol(numbers[i]);
		i++;
	}
	return (arr);
}

int	has_duplicates(long *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	validate_format(char **numbers)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (numbers[i])
	{
		if (numbers[i][z] == '+' || numbers[i][z] == '-')
			z++;
		if (numbers[i][z] == '\0')
			return (0);
		while (numbers[i][z] != '\0')
		{
			if (numbers[i][z] < '0' || numbers[i][z] > '9')
				return (0);
			z++;
		}
		i++;
		z = 0;
	}
	return (1);
}

long	*validate(char **numbers)
{
	long	*arr;
	int		size;
	int		i;

	if (!numbers)
		return (0);
	if (!validate_format(numbers))
		return (0);
	size = count_numbers(numbers);
	arr = to_long_array(numbers, size);
	i = 0;
	if (!arr || has_duplicates(arr, size) || !arr[i])
		return (free(arr), NULL);
	while (i < size)
	{
		if (arr[i] < INT_MIN || arr[i++] > INT_MAX)
			return (free(arr), NULL);
	}
	return (arr);
}
