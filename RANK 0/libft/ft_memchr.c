/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:30:48 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/23 10:58:55 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*csrc;
	size_t				i;

	csrc = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (csrc[i] == (unsigned char)c)
			return ((void *)&csrc[i]);
		i++;
	}
	return (NULL);
}
