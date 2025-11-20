/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:18:41 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/22 13:00:55 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_total(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_len;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2;
	return (total_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_len;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_total(s1, s2);
	joined = (char *)malloc(total_len + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i] = s2[j++];
		i++;
	}
	joined[total_len] = '\0';
	return (joined);
}
/*int	main()
{
	char *s1 = "hola";
	char *s2 = "bebe";
	char *joined;
	
	joined = ft_strjoin(s1, s2);
	printf("%s\n" joined);
}*/
