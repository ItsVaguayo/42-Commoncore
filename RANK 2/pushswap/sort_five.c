/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:38:02 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/12 10:33:09 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int stack_size(t_node **stack)
{
	t_node 	*temp;
	int 	size;

	if (!stack || !(*stack))
        return (0);
    temp = *stack;
	size = 0;
	while (temp)
	{
		size++;
        temp = temp->next;
	}
	return (size);
}
static int min_pos(t_node **stack_a, int min_value)
{
    int min_pos;
    t_node *temp;
    
	temp = *stack_a;
	min_pos = 0;
	while (temp && temp->value != min_value)
	{
		temp = temp->next;
		min_pos++;
	}
	return (min_pos);
}

static int value_min(t_node **stack_a)
{
	int min_value;
    t_node *temp;
    
    min_value = (*stack_a)->value;
	temp = *stack_a;
    while (temp)
    {
        if (temp->value < min_value)
			min_value = temp->value;
		temp = temp->next;
    }
	return (min_value);
}

void sort_five(t_node **stack_a, t_node **stack_b)
{
    int size;
    int pos;
    int min;

    while (stack_size(stack_a) > 3)
    {
        size = stack_size(stack_a);
        min = value_min(stack_a);
		pos = min_pos(stack_a,min);

        if (pos <= size / 2)
        {
            while ((*stack_a)->value != min)
                ra(stack_a);
        }
        else
        {
            while ((*stack_a)->value != min)
                rra(stack_a);
        }
        pb(stack_a, stack_b);
    }
    sort_three(stack_a);
    while (*stack_b)
        pa(stack_b,stack_a);
}