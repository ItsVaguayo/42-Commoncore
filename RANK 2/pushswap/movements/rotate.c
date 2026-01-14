/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:07:43 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/14 12:43:31 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void	rotate(t_node **stack)
{
	t_node	*temp;
	t_node	*lasttemp;

	if ((*stack) == NULL || !(*stack)->next)
		return ;
	temp = *stack;
	*stack = temp->next;
	lasttemp = *stack;
	while (lasttemp->next != NULL)
		lasttemp = lasttemp->next;
	lasttemp->next = temp;
	temp->next = NULL;
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
