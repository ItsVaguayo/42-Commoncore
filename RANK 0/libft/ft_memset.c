/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:07:24 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/02 12:30:34 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*int main(void)
{
    char str[10] = "Hola";

    ft_memset(str, 'X', 5);
    printf("%s\n", str);  // XXXXX

    int nums[4] = {1, 2, 3, 4};
    ft_memset(nums, 0, sizeof(nums));
    printf("%d %d %d %d\n", nums[0], nums[1], nums[2], nums[3]);  // 0 0 0 0
}*/
