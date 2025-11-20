/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:11:35 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/19 16:33:57 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		total_size = 0;
	else
	{
		if (nmemb > INT_MAX / size)
			return (NULL);
		total_size = nmemb * size;
	}
	p = malloc(total_size);
	if (!p)
		return (NULL);
	ft_bzero(p, (total_size));
	return (p);
}
