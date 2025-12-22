/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:50:58 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/12/22 19:27:56 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void swap(t_node **stack) 
{
    t_node *temp1;
    t_node *temp2;

    temp1 = *stack;
    if (temp1== NULL || temp1->next == NULL)
        return;
    temp2 = temp1->next;
    temp1->next = temp2->next;
    temp2->next = temp1;
    *stack = temp2;
}


void sa(t_node **stack_a)
{
    swap(stack_a);
    ft_printf("sa");
}
void sb(t_node **stack_b)
{
    swap(stack_b);
    ft_printf("sb");
}

void ss(t_node **stack_a, t_node **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_printf("ss");
}