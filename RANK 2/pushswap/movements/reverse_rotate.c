/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:43:48 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/14 12:43:50 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void	reverse_rotate(t_node **stack)
{
	t_node	*penultimatetemp;
	t_node	*lasttemp;

	if ((*stack) == NULL || !(*stack)->next)
		return ;
	penultimatetemp = *stack;
	lasttemp = *stack;
	while (lasttemp->next != NULL)
		lasttemp = lasttemp->next;
	while (penultimatetemp->next->next != NULL)
		penultimatetemp = penultimatetemp->next;
	lasttemp->next = *stack;
	penultimatetemp->next = NULL;
	*stack = lasttemp;
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
