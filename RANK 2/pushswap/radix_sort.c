/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:24:30 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/14 11:17:29 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int get_max_bits(int max)
{
	int i;

	i = 0;

	while ((max >> i))
		i++;
	return (i);
}

void radix_sort(t_node **stack_a, t_node **stack_b)
{
    int i;
    int size;
	int bitsize;
	int count;
	
	size = stack_size(stack_a);
	bitsize = get_max_bits(size);
	i = 0;
	while (i < bitsize)
	{
		count = 0;
		while (count != size)
		{
			if (((*stack_a)->value >> i) & 1)
        		ra(stack_a);
			else
				pb(stack_a,stack_b);
			count++;
		}
		while (*stack_b)
       		pa(stack_b,stack_a);
		i++;
	}
}