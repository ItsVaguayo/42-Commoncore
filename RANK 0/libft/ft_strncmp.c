/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:35:16 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/19 17:40:06 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n-- > 1 && *s1 && (*s1 == *s2))
		(void)((unsigned long)(s1++) + (unsigned long)(s2++));
	return ((unsigned char )*s1 - (unsigned char)*s2);
}
