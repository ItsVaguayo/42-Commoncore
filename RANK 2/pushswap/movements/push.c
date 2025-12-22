/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:07:26 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/12/22 19:07:33 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void push(t_node **from_stack,t_node **to_stack)
{
    t_node *temp;

    if ((*from_stack) == NULL)
        return;
	temp = *from_stack;
	*from_stack = temp->next;
	temp->next = *to_stack;
	*to_stack = temp;
}

void pa(t_node **stack_b, t_node **stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pa");
}
void pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb");
}
