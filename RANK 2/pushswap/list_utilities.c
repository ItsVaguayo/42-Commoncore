/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:24:26 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/14 11:53:21 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_node *create_node(int value)
{
    t_node *new;

    new = malloc(sizeof(t_node));
    new->value = value;
    new->next = NULL;
    return (new);
}

void add_back(t_node **head, int value)
{
    t_node *new;
    t_node *temp;

    new = create_node(value);
    if ((*head) == NULL)
    {
        *head = new;
        return;
    }
    temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}

void build_stack(t_node **stack_a, char **numbers)
{
    int i;

    i = 0;
    while (numbers[i] != NULL)
    {
        add_back(stack_a,ft_atol(numbers[i]));
        i++;
    }
}

int is_sorted(t_node **head)
{
    t_node *temp;
    
    if ((*head) == NULL)
        return (0);
    temp = *head;
    while (temp && temp->next)
    {
        if (temp->value > temp->next->value)
            return (0);
        temp = temp->next;
    }
    return (1);
}
