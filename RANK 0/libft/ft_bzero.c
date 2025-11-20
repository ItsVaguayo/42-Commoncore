/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:23:43 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/02 11:20:13 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	unsigned char	c;
	size_t			i;

	p = (unsigned char *)s;
	c = '\0';
	i = 0;
	while (i < n)
	{
		p[i++] = c;
	}
}
