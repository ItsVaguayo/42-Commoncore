/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 21:49:52 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/14 12:40:26 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_two(t_node **stack_a)
{
	if (is_sorted(stack_a))
		return ;
	sa(stack_a);
}

void	sort_three(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->value;
	second = (*stack_a)->next->value;
	third = (*stack_a)->next->next->value;
	if (first > second && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first > second && first < third && second < third)
		sa(stack_a);
	else if (first > second && first > third && third > second)
		ra(stack_a);
	else if (first < second && first < third && second > third)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (first < second && first > third)
		rra(stack_a);
}
