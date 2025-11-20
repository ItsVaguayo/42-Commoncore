/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:36:37 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/18 15:25:03 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d == s || len == 0)
		return (dest);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dest);
}
/*int	main()
{
	char src[10] = "hola";
	printf("%s\n",(unsigned char *)memmove(NULL, "hola", 4));
	printf("%s\n",(unsigned char *)ft_memmove(NULL, NULL, 4));

}*/
/*	printf("%s\n",(unsigned char *)memmove(src, "pepe", 2));
	printf("%s\n",(unsigned char *)memmove(src, "pepe", 3));
	printf("%s\n",(unsigned char *)memmove(src, "pepe", 4));
	printf("%s\n",(unsigned char *)memmove(src, "pepepote", 5));
	printf("%s\n",(unsigned char *)memmove(src, "pepepote", 10));
	//printf("%s\n",(unsigned char *)memmove("Tuputamadre", "Adios", 2));
}*/
