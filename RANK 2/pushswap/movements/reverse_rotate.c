/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:07:43 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/12/22 19:35:32 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void reverse_rotate(t_node **stack)
{
   t_node *penultimatetemp;
   t_node *lasttemp;
   
   if ((*stack) == NULL || !(*stack)->next)
		return;
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

void rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra");
}

void rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb");
}

void rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr");
}
