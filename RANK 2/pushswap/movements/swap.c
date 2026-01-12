/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 17:50:58 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/12 10:07:59 by vaguayo-         ###   ########.fr       */
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
    write(1,"sa\n",3);
}
void sb(t_node **stack_b)
{
    swap(stack_b);
    write(1,"sb\n",3);
}

void ss(t_node **stack_a, t_node **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    write(1,"ss\n",3);
}