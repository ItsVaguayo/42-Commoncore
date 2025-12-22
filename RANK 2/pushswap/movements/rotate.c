/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:07:43 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/12/22 19:35:32 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void rotate(t_node **stack)
{
   t_node *temp;
   t_node *lasttemp;
   
   if ((*stack) == NULL || !(*stack)->next)
		return;
	temp = *stack;
	*stack = temp->next;
	lasttemp = *stack;
	while (lasttemp->next != NULL)
		lasttemp = lasttemp->next;
	lasttemp->next = temp;
	temp->next = NULL;
}

void ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_printf("ra");
}

void rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_printf("rb");
}

void rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr");
}
