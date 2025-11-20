/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:10:51 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/19 15:58:30 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_set(char c, const char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

static size_t	get_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && to_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end(const char *s1, const char *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && to_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set, start);
	len = end - start;
	trimmed = malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
