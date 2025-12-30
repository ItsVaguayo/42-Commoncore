/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 10:37:56 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/12/29 19:16:40 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	int		len;

	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
