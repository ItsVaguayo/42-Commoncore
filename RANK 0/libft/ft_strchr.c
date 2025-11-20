/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:19:57 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/22 17:15:03 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;
	char			*cpy;

	cpy = (char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (cpy[i])
	{
		if ((unsigned char)cpy[i] == uc)
			return (&cpy[i]);
		i++;
	}
	if (uc == '\0')
		return (&cpy[i]);
	return (NULL);
}
